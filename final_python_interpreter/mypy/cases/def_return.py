x = 5.5
x-=2*x+5*x
def n():
    x= 1
    def g():
        print x
        def k():
            print x

        k()
    g()
n()
