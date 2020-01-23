
for i in a:
	if i.isalpha():
		continue
	elif i.isdigit():
		p.append((a[a.index(i) - 1]*a.index(i)))
s = ""
for i in ls:
	s += i

    if "O" in s:
	print(s.count("O"))
else:
	print("mn")

	
