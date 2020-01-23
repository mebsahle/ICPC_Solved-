tc = int(input())
for i in range(tc):
    st = input()
    cmd = st.split()
    if cmd[0] == "Simon" and cmd[1] == "says":
        st = st.replace("Simon says",'')
        print(st.lstrip())
    else:
        pass
