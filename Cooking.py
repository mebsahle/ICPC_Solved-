tc = int(input())
result = []
for i in range(tc):
    ini,fin = [int(i) for i in input().split()]
    result.append(fin-ini)
if 0 not in result:
    print("edward is right")
else:
    print("gunilla has a point")   
