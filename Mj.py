###bubble sort
##def bubble(n):
##    ln = len(n)
##    for i in range(ln):
##        for j in range(0, ln-i-1):
##            if n[j] > n[j+1]:
##                n[j], n[j+1] = n[j+1], n[j]
##            print(*n)
##        if sorted(n) == list(range(min(n),max(n)+1)):
##            break
##bubble(n)                
n = [int(i) for i in input().split()]

for i in range(1,len(n)+1):
    if n[i] < n[i-1]:
        t = n[i]
        n[i] = n[i+1]
        n[i+1] = t
    print(n)
l = []
for i in range(1,len(l)+1):
    if l[i-1] != l[i]:
        print(*l[i-1])
