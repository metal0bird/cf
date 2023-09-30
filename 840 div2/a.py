n=int(input())
for i in range(0,n):
    ran=int(input())
    arr= list(map(int, input().split()))

    orr=arr[0]
    andd=arr[0]
    for i in arr:
        orr=orr|i
        andd=andd&i
    print(orr-andd)

