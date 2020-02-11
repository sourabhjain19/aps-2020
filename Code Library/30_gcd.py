def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

n1=int(input())
n2=int(input())
print(gcd(n1,n2))
