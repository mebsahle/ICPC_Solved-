tc = int(input())
si =  input().split()
c = 0
s = 0
for j in si:
    if float(j) >= 0:
        c += 1 
        s+=float(j)
        #print(s)
print(s/c)
