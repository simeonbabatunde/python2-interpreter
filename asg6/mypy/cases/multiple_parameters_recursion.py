def f(n,c,t,k,l):
    print n
    print c
    print t
    print k
    print l
    print 99
    if c > 0:
        c-=1
        n+=1
        t+=k+l
        l+=n+5
        # f(n,c,t,k,l)

f(100,3,6,7,5)
