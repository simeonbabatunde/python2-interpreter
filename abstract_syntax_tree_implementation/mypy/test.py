#!/usr/bin/python

import os, sys
import fnmatch
import subprocess
from subprocess import PIPE
import filecmp
import locale

__encoding = locale.getdefaultlocale()[1]


def testCode( retcode, msg ):
  if retcode > 0:
    print msg
    sys.exit( 1 )

####Configuration####

testDir = os.path.join( os.getcwd(), 'cases') #Directory for generic test cases.
specialDir = os.path.join(os.getcwd(),'cases/special') #Directory for special cases that need seperate python scripts.
pySpecialDir = os.path.join(os.getcwd(),'cases/py_special') #Directory

intHeader = "INT: " #The text that prefaces ints,etc. Change this to whatever you use. Ignore it if you don't print these.
floatHeader = "FLOAT: "
stringHeader = "STRING: "
#See also: lines 58 and 90 where these strings are stripped out of the

if not os.path.isdir( testDir ):
  print testDir, "isn't a directory"
  sys.exit( 1 )

executable = os.path.join(os.getcwd(), "run")
if not os.path.isfile( executable ):
  retcode = subprocess.call("make",shell=True)
  testCode( retcode, "\tFAILED to make the scanner" )


#####Test all files in the base directory.######
files = os.listdir( testDir )
passed = 0
failed = 0
for x in files:
  if fnmatch.fnmatch(x, "*.py"):
	python_file_to_parse = os.path.join(testDir, x)

	our_process = subprocess.Popen( ["./run", python_file_to_parse] , stdout=PIPE, stderr=PIPE, stdin=PIPE)
	our_output = our_process.communicate()
	our_output = our_output[0].split("\n")

	mccabe_process = subprocess.Popen( ["python", python_file_to_parse], stdout=PIPE, stderr=PIPE, stdin=PIPE)
	mccabe_output = mccabe_process.communicate()
	mccabe_output = (mccabe_output[0].split("\n"))


	realout = []
	for string in our_output:
		string = string.replace(intHeader,"").replace(floatHeader,"").replace(stringHeader,"")
		realout.append(string)

	our_output = realout



	if our_output != mccabe_output:
		print "\ttestcase:", x, "FAILED"
		failed += 1
	else :
		print "testcase:", x, "passed"
		passed += 1

###Test all special test cases ###
files = os.listdir( specialDir )
for x in files:
  if fnmatch.fnmatch(x, "*.py"):
	my_file_to_parse = os.path.join(specialDir,x)
	python_file_to_parse = os.path.join(pySpecialDir, x)

	our_process = subprocess.Popen( ["./run", my_file_to_parse] , stdout=PIPE, stderr=PIPE, stdin=PIPE)
	our_output = our_process.communicate()
	our_output = our_output[0].split("\n")

	mccabe_process = subprocess.Popen( ["python", python_file_to_parse], stdout=PIPE, stderr=PIPE, stdin=PIPE)
	mccabe_output = mccabe_process.communicate()
	mccabe_output = (mccabe_output[0].split("\n"))


	realout = []
	for string in our_output:
		string = string.replace(intHeader,"").replace(floatHeader,"").replace(stringHeader,"")
		realout.append(string)

	our_output = realout



	if our_output != mccabe_output:
		print "\t special testcase:", x, "FAILED"
		failed += 1
	else :
		print "special testcase:", x, "passed"
		passed += 1


print passed, "test cases passed"
print failed, "test cases failed"
