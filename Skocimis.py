a,b,c = [int (i) for i in input().split()]
count = 0
for i in range(a,c):
    if i <= b:
        continue
    else:
        count+=1
if b-a-1 > count:
    print(b-a-1)
else:
    print(count)
