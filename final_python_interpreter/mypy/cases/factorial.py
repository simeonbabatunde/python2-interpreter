def f(n):
    if n == 1:
        return 1
    else:
        return n * f(n-1)

print f(5)
print f(10)
print f(6)
print f(11)
