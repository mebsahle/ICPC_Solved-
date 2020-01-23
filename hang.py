L, I = [int(i) for i in input().split()]
su = 0
for i in range(I):
    cmd = input().split()
    ls.append(cmd)
    if cmd[0] == "enter":
        su+=cmd[i]
        
    
