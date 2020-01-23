while True:
    a,b,c = [int(i) for i in input().split()]
    if a == 0 and b == 0 and c == 0:
        break
    else:
        if a**2+b**2==c**2 or a**2+c**2==b**2 or a**2==b**2+c**2:
            print("right")
        else:
            print("wrong")
