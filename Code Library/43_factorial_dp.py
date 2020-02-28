def factorial(n):
    fact=[1]*(n+1)
    for i in range(1,n+1):
        fact[i]=fact[i-1]*i
    return fact[n]

print(factorial(7))