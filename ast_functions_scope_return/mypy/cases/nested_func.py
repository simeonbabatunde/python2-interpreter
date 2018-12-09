def f():
  return 72
def g():
  print 15
  x = 12
  def h():
    return x
  print h()
  return 2*x
print f()
print g()
