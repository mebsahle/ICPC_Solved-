##3 bottles of milk on the wall, 3 bottles of milk.
##Take one down, pass it around, 2 bottles of milk on the wall.
tc = int(input())
st = input()
for i in reversed(range(tc+1)):
    if i > 1:
        print("{0} bottles of {1} on the wall, {2} bottles of milk.".format(i,st,i))
        if i - 1 > 1:
            print("Take one down, pass it around, {0} bottles of milk on the wall.".format(i-1,st))
            print()
        else:
            print("Take one down, pass it around, {0} bottle of milk on the wall.".format(i-1,st))
            print()
    elif i == 1:
        print("{0} bottle of {1} on the wall, {2} bottle of milk.".format(i,st,i))
        print("Take it down, pass it around, no more bottles of milk.")
    elif i < 1:
        break
