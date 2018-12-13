def f():
  x = 7
  print x
  def g():
    x = 17
    print x
    def h():
      x = 77
      print x
    h()
    print x
  g()
  print x

f()
