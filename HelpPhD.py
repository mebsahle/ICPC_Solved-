tc = int(input())
for i in range(tc):
    t = input()
    if t == "P=NP":
        print("skipped")
    else:
        print(eval(t))
