
n=int(input())
bit=[0]*(n+1)
a=[0]*(n+1)

def update(x,value):
    global bit,a,n
    x+=1
    while(x<=n):
        bit[x]+=value
        x=x+(x&-x)

def query(x):
    global bit,a,n
    
    querysum=0
    while(x>0):
        querysum+=bit[x]
        x=x-(x&-x)
    return querysum

for i in range(n):
    a[i+1]=i+1
    update(i,i+1)

print(*a)
print(*bit)

q=int(input())
for i in range(q):
    l,m=map(int,input().split())
    print(query(m)-query(l-1))
