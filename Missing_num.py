tc = int(input())
ls = []
for i in range(tc):
    t = int(input())
    ls.append(t)
l = range(1,ls[-1] + 1)
if len(ls) == len(l):
    print("good job")
else:
    for i in range(ls[-1]):
        if l[i] not in ls:
            print(l[i])

