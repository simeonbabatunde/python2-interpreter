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

def j():
    return x+1
    y=5
    print y

x = j()
y = 2
y%=2*y-2.5**x
print y
