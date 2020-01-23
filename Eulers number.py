import math
def loga(n):
    e = 1
    for i in range(n):
        e += 1/math.factorial(i+1)
tc = int(input())
loga(tc)
