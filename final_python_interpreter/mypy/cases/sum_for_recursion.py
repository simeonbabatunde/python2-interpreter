def sum_digits(n):
  if n < 10:
    return n
  else:
    all_but_last = n // 10
    last = n % 10
    return sum_digits(all_but_last) + last

print sum_digits(10)
print sum_digits(9754321)
print sum_digits(5821000)
print sum_digits(276)
