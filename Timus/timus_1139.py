from math import gcd

n, m = map(int, input().split())
n, m = n - 1, m - 1 
print((n + m) - gcd(n, m))