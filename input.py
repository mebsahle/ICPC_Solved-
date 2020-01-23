##ls = [[0 for i in range(3)] for i in range(3)]
##for i in range(len(ls)):
##    for j in range(len(ls)):
##        if ls[i][j] == 0:
##            ls[i][j] = 10
ls = []
for i in range(3):
    ln = [int(i) for i in input().split()]
    ls.append(ln)
    
print(*ls)
