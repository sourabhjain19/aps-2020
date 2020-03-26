#Application is How many structural trees are possible with n nodes

def catlan(n):
    catlantable=[0]*(n)
    
    catlantable[0]=1
    catlantable[1]=1
    catlantable[2]=2

    for i in range(3,n):
        for j in range(i):
            catlantable[i]+=catlantable[j]*catlantable[(i-1)-j]
    
    return catlantable

n=20
print(*catlan(n))


