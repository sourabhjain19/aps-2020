def superfactorial(n):
    fact=[1]*(n+1)
    for i in range(1,n+1):
        fact[i]=fact[i-1]*i
    
    res=1
    for i in fact:
        res*=i

    return res
print(superfactorial(4))