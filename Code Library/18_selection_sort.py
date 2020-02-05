def selection(arr):
    a=[]
    l=len(arr)
    for i in range(l-1):
        a.append(arr.pop(arr.index(min(arr))))
    a.append(arr[0])
    return a
if __name__=="__main__":
    arr=list(map(int,input().split()))
    res=selection(arr)
    print(res)
