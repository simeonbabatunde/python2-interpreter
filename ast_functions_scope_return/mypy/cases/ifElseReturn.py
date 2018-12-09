x=9
y=8
def h():
    print x+1
    y=x+1
    if y>0:
        y=9
    else:
        return 10
    print y

print x
x=h()
