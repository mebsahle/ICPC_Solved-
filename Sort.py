tc, t = [int(i) for i in input().split()]
ls = [int(i) for i in input().split()]
d = {}
for i in ls:
	c = ls.count(i)
	if not c in d:
		d[c] = [i]
	else:
		if i not in d[c]:
			d[c].append(i)
f_l = []
fin = []
while d:
    i = max(d)
    f = d[i]
    for j in f:
        f_l.extend([j]*i)

    d.pop(i)
    
print(*f_l)

    
        
