def ugly(n):
    
    index2=index3=index5=0

    ugly=[0]*n

    m2=2
    m3=3
    m5=5

    ugly[0]=1

    for i in range(1,n):

        ugly[i]=min(m2,m3,m5)

        if ugly[i]==m2:
            index2+=1
            m2=ugly[index2]*2

        if ugly[i]==m3:
            index3+=1
            m3=ugly[index3]*3

        if ugly[i]==m5:
            index5+=1
            m5=ugly[index5]*5

    return ugly

res=ugly(20)
print(*res)        

