

n=int(input())
for i in range(0,n):
    a=int(input())
    lst=list(range(1,a+1))
    for j in range(0,a-1,2):
        lst[j],lst[j+1]=lst[j+1],lst[j]
    if(a%2==0):
        print(*lst)
    else:

        lst[a-2],lst[a-1]=lst[a-1],lst[a-2]
        print(*lst)