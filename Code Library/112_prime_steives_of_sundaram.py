def sof(n):
    
    prime=[]

    new=(n-2)//2

    marked=[0]*(new+1)
    for i in range(1,new+1):
        j=i
        while i+j+2*i*j <= new:
            marked[i+j+2*i*j]=1
            j+=1

    if n>=2:
        prime.append(2)

    for i in range(1,new+1):
        if marked[i]==0:
            prime.append(2*i+1)
    
    return prime

n=int(input())
res=sof(n)
res.sort()
print(*res)