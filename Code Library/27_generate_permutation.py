def permutation(arr):
    for j in range(1,len(arr)+1):
        for i in range(len(arr)-1):
            temp=arr[i]
            arr[i]=arr[i+1]
            arr[i+1]=temp
            for k in range(len(arr)):
                print(arr[k],end=' ')
            print()

arr=list(input().split())
permutation(arr)