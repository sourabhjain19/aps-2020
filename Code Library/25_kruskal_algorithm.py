def union(arr,a,b):
    t=arr[a]
    for i in range(len(arr)):
        if arr[i]==t:
            arr[i]=arr[b]
    return arr

def find(arr,a,b):
    if arr[a]==arr[b]:
        return 0
    else:
        return 1

n=int(input())
l=[i for i in range(n)]
n1l=[]
n2l=[]
el=[]
for _ in range(n):
    n1,n2,e=map(int,input().split())
    n1l.append(n1)
    n2l.append(n2)
    el.append(e)
for i in range(n):
    if find(l, n1l[i], n2l[i]):
        print(n1l[i],n2l[i])
        union(l, n1l[i], n2l[i])

    

