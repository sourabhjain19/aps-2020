def root(arr,i):
    while i!=arr[i] :
        i=arr[i]
    return arr[i]

def find(arr,u,v):
    if root(arr,u)==root(arr,v):
        return 1
    else:
        return 0

def weight_union(arr,size,u,v):
    rootu=root(arr,u)
    rootv=root(arr,v)

    if(size[rootu]<size[rootv]):
        arr[rootu]=arr[rootv]
        size[rootv]+=size[rootu]
    else:
        arr[rootv]=arr[rootu]
        size[rootu]+=size[rootv]
    
    return arr,size

arr=[0,1,2,3,4,5]
size=[1,1,1,1,1,1]

arr,size=weight_union(arr,size,0,1)
print(arr)
arr,size=weight_union(arr,size,1,2)
print(arr)
arr,size=weight_union(arr,size,3,2)
print(arr)