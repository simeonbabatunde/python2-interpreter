def cascade(n):
        if n < 5:
            print n
        else:
            print n
            cascade(n//5)
            print n

cascade(5017)
print 123456
cascade(8320)
