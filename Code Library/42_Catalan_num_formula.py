def factorial(n):
    fact=[1]*(n+1)
    for i in range(1,n+1):
        fact[i]=fact[i-1]*i
    return fact

for n in range(1,100):
    fact=factorial(2*n)
    Cn = fact[2*n] / (fact[n+1]*fact[n])
    print(Cn)
