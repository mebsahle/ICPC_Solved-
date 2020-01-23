while True:
    try:
        n = input()
        if '#' not in n:
            print(-1)
        else:
            l = n.replace("#","_")
            print(l)
    except:
        break
    
        
