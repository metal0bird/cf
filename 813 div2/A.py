n=int(input())
for i in range(0,n):
    x,y= list(map(int, input().split()))
   
    lst=[]
    lst = list(map(int,input().strip().split()))[:n]
    lst_s=list(range(1,x+1))
    lst_s=lst_s[0:y]
    count=0
   
    for j in lst_s:
        if j in lst[0:y]:
            count=count+1
    print(y-count)