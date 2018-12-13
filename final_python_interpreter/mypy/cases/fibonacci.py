def fibonacci(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    else:
        return fibonacci(n-2) + fibonacci(n-1)

result = fibonacci(6)
print result

x = fibonacci(10)
print x
print fibonacci(9)
print fibonacci(12)
print fibonacci(24)
