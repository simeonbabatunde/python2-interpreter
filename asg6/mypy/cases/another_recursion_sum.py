def sum_n(n):
    if n== 0:
        return 0
    else:
        return n + sum_n(n-1)

print sum_n(50)
print sum_n(10)
