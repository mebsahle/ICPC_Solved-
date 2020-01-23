import math
def check(di, key):
    if key in di:
        return di[key]
def get_key(val):
    for key, value in di.items():
        if val == value:
            return key
   
di={"xxxxxx...xx...xx...xx...xx...xxxxxx":0,"....x.....x.....x.....x.....x.....x.....x.":1,
   "xxxxx.....x.....x.xxxxx.x.....x.....xxxxx.":2,"xxxxx.....x.....x.xxxxx.....x.....x.xxxxx.":3,"x...x.x...x.x...x.xxxxx.....x.....x.....x.":4,
   "xxxxx.x.....x.....xxxxx.....x.....x.xxxxx.":5,"xxxxx.x.....x.....xxxxx.x...x.x...x.xxxxx.":6,"xxxxx.....x.....x.....x.....x.....x.....x.":7,
   "xxxxx.x...x.x...x.xxxxx.x...x.x...x.xxxxx.":8,"xxxxx.x...x.x...x.xxxxx.....x.....x.xxxxx.":9,"........x.....x...xxxxx...x.....x.........":"+"
   }
st = ""
l = []
for i in range(7):
    n = input()
    d  = len(n)//5

    if not l:#if l is empty
        for i in range(d+1):
            l.append("")
    for i in range(len(n)):
        li = math.ceil((i+1) /5 ) - 1
        #print(li, i)
        l[li]+=n[i]
print(l)
s = ""
for i in l:
    ran = check(di, str(i))
    s += str(ran)
    print(ran)
p = eval(s)
final__ = []
x = []
p = str(p)

for _ in p:
    final = get_key(int(_))
    n = len(final)//7
    final_=[final[i:i+n] for i in range(0, len(final), n)]
    final__.append(final_)
oo = []
for i in range(n+1):
    oo.append("")
for i in final__:
    for j in range(len(i)):
        oo[j] += i[j]        
for i in oo:
    print(i[:-1])
