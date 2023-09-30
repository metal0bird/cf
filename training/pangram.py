s=input()
str="abcdefghijklmnopqrstuvwxyz"
flag=0
for char in str:
    if char not in s:
        flag=1
        break
if flag==1:
    print("nope")
else:
    print("yasss")
    
