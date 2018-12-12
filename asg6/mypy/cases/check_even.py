def is_even(n):
  if n == 0:
    return 1
  else:
    return is_odd(n-1)

def is_odd(n):
  if n == 0:
    return 0
  else:
    return is_even(n-1)

result = is_even(4)
print result
print is_even(29)
print is_even(132)
print is_even(231)
