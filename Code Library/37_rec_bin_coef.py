def coef(n,k):
    if n==k or k==0:
        return 1
    return coef(n-1,k-1)+coef(n-1,k)

print(coef(5,3))