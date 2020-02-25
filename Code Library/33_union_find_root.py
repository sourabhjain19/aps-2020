def root(arr,i):
    while i!=arr[i] :
        i=arr[i]
    return arr[i]

def find(arr,u,v):
    if root(arr,u)==root(arr,v):
        return 1
    else:
        return 0

def union(arr,u,v):
    rootu=root(arr,u)
    rootv=root(arr,v)
    arr[rootu]=rootv

arr=[0,1,2,3,4,5,6,7]

union(arr,0,1)
union(arr,0,5)
union(arr,3,4)
union(arr,5,3)
union(arr,1,6)

print(arr)