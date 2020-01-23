while True:
    rmc=input().split()
    r = float(rmc[0])
    m = float(rmc[1])
    c = float(rmc[2])
    if r == 0 and m == 0 and c == 0:
        break
    else:
        sq = float(2*r)
        print(format(3.141592653589793*r**2,'.10g'),format(c/m*(sq**2),'.10g'))
