#hyperfactorial is the no such as 108 - 3^3 * 2^2 * 1^1

def hyperfactorial(nn):
    res=1
    for i in range(nn,0,-1):
        res*=i**i
    return res

n=int(input())
for i in range(1,n+1):
    print(hyperfactorial(i))

