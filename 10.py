li = [""]*10
>>> li
['', '', '', '', '', '', '', '', '', '']
>>> for i in range(10+1):
	for j in range(10+1):
		if i%2 == 0:
			li[i] += "+"
