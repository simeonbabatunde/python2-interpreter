def f():
  x = 5
  print x
  def g():
      y = 50
      print y
      def k():
          z= z+500
          print z
      k()
  g()
f()