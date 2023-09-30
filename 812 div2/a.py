def split(word):
    return [char for char in word]

n=int(input())
for i in range(0,n):
    a=int(input())
    y_p=[]
    y_n=[]
    x_p=[]
    x_n=[]
    y_p.append(0)
    y_n.append(0)
    x_p.append(0)
    x_n.append(0)
    for j in range(0,a):
        st=input()
        x,y= list(map(int, input().split()))
        print("x and y:",end=" ")
        print(x,y)
        if(x>=0):
            x_p.append(x)
        else:
            x_n.append(x)
        if(y>=0):
            y_p.append(y)
        else:
            y_n.append(y)
        print(x_p)
        print(x_n)
        print(y_p)
        print(y_n)
    ans=2*(abs(max(y_p))+abs(min(y_n))+abs(max(x_p))+abs(min(x_n)))
    print("ans")
    print(ans)

