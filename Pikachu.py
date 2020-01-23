##input()
##s = input()
##t = input()
##day = 0
##ans = 0
##i = 0
##while ans!=ord(t[i]):
##    if ord(t[i])-ord(s[i])>12:
##        ans = ord(s[i])+12
##        day+=1
##    if ans>ord('Z'):
##        ans = ans - ord('Z')+ord('A')
##        i+=1
##        print(chr(ans))
##    elif s[i] == t[i]:
##        day+=0
##    else:
##        ans = ord(s[i])+1
##        day+=1
##    i+=1
##    
##print(day)


##length = int(input())
##s = input()
##t = input()
##day = 0
##string = ""
##i = 0
##while i<=length-1:
##    ans = 0
##    ords = ord(s[i])
##    if s[i]==t[i]:
##        day+=0
##        print(s[i])
##    elif ord(t[i])-ords==1:
##        ans += ord(s[i])+1
##        print(ans)
##        day+=1
##    else:
##        while ans!=ord(t[i]):
##            if ord(t[i])-ord(s[i])>=1:
##                ans = ord(s[i])+1
##                print(ord(s[i]))
##                day+=1
##            elif ord(t[i]) - ord(s[i])>12:
##                ans = ord(s[i])+13
##                day+=1
##            elif ans>ord('Z'):
##                ans -= ord('Z')+ord('A')
##    i+=1
##print(day,string)           
##4
##ABCT
##PBDI
from string import ascii_uppercase
let = list(ascii_uppercase)
tc = int(input())
s = input()
t = input()
for i in range(len(s)):
    if let.index(t[i])>let.index(s[i]):
        a = (let.index(t[i]) - let.index(s[i]))//12+(let.index(t[i]) - let.index((s[i])))%13
        print(a)

