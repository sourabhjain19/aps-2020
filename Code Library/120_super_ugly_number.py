def ugly(n,primes):
    
    index=[0]*len(primes)

    ugly=[0]*n

    m=primes

    ugly[0]=1

    for i in range(1,n):

        ugly[i]=min(m)

        for j in range(len(m)):
            
            if ugly[i]==m[j]:
                index[j]+=1
                m[j]=ugly[index[j]]*primes[j]
            
    return ugly

n=9
primes=[3, 5, 7, 11, 13]
res=ugly(n,primes)
print(*res)        

