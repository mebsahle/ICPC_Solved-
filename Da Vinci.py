tc = int(input())
for i in range(tc):
    cmd = input().split()
    line = int(cmd[0])
    u = cmd[1]
    s = cmd[2]
    li = [""]*line
    for i in range(line):
        n = input()
        li[i]+=n
    for i in li:
        st = ""
        c = 0
        for j in i:
            for _ in range(len(u)):
                slice_ind = i.find(u[_])
                st+=i[slice_ind:]+i[:slice_ind]
                i.replace(i,st)
                c+=1
                st = ""
    print(li)
        
        
