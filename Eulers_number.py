import math
def loga(n):
    if n == 0:
        print(1)
    elif n<=17:
        e = 1
        for i in range(n):
            e += 1/math.factorial(i+1)
        print(e)
    else:
        print(2.7182818284590455)
tc = int(input())
loga(tc)
