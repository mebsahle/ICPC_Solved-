import math
def check(di, key):
    if key in di:
        return di[key]
def get_key(val):
    for key, value in di.items():
        if val == value:
            return key
   
di={"xxxxxx...xx...xx...xx...xx...xxxxxx":0,"....x....x....x....x....x....x....x":1,
   "xxxxx....x....xxxxxxx....x....xxxxx":2,"xxxxx....x....xxxxxx....x....xxxxxx":3,"x...xx...xx...xxxxxx....x....x....x":4,
   "xxxxxx....x....xxxxx....x....xxxxxx":5,"xxxxxx....x....xxxxxx...xx...xxxxxx":6,"xxxxx....x....x....x....x....x....x":7,
   "xxxxxx...xx...xxxxxxx...xx...xxxxxx":8,"xxxxxx...xx...xxxxxx....x....xxxxxx":9,".......x....x..xxxxx..x....x.......":"+"
   }

l = []
for i in range(7):
    n = input().strip()
    if not l:#if l is empty
        for j in range(math.ceil(len(n)/6)):
            l.append("")

    st = ""
    c = 0
    for j in range(len(n)):
        
        if (j+1)%6==0 and j!=0:
            l[c] += st
            c+=1
            st = ""
        else:
            st+=n[j]
    l[-1]+=st
           
            
#print(l)
s = ""
##for i in l:
##    for j in di:
##        if j==i:
##            s+=str(di[j])
##            break

for i in l:
    ran = check(di, str(i))
    s += str(ran)
    #print(ran)

p = eval(s)
p = str(p)
#print(p)
final__ = []
for _ in p:
    final = get_key(int(_))
    #print(final)
    n = len(final)//7
    final_=[final[i:i+n] for i in range(0, len(final), n)]
    final__.append(final_)
#print(final__)
oo = []
for i in range(len(p)):
    oo.append("")
#print(oo)
for i in final__:
    for j in range(len(i)):
        oo[j] += i[j]+"."        
for i in oo:
    print(i[:-1])
