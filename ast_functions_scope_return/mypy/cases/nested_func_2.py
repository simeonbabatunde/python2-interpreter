x=1
def G():
  print x
  def H():
    print x+1
    def k():
      print x+2
      def y():
          print x+3
          def M():
              print x+4
          M()
      y()
    k()
  H()

G()
x=2
def S():
    G()

S()
