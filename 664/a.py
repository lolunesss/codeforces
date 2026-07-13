def gcd(a, b):
  if b == 0:
    return a 
  return gcd(b, a % b)

a, b = [int(x) for x in input().split()]
g = a 
for x in range(a, b + 1):
  g = gcd(g, x)
  if g == 1:
    break

print(g)


