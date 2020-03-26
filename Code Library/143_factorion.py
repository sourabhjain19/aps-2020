#Factorion is a number whose sum of factorial of each digit gives the number itself
def factorial(x):
    global fact
    return fact[x]

def factorion(n):
    factorialsum=0
    temp1=n
    while n:
        temp=n%10
        n=int(n/10)
        factorialsum+=factorial(temp)

    if factorialsum==temp1:
        return 1
    else:
        return 0

fact=[0]*10

fact[0]=1

for i in range(1,10):
    fact[i]=fact[i-1]*i

n=int(input())
for i in range(1,n):
    if factorion(i):
        print(i)