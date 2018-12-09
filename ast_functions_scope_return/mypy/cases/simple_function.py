def f():
  x = 5
  print x
  def g():
      y = 50
      print y
      def k():
          z= 500
          return
          print z
      k()
  g()
f()
