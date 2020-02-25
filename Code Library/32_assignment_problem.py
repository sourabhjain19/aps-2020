def count_1_digits(n):
    count=0
    while n:
        n = n & n - 1
        count+=1
    return count

n=int(input())
cost=[]
for i in range(n):
    cost.append(list(map(int,input().split())))

dp=[float('inf')]*(2**n)
dp[0]=0

nn=2**n

for mask in range(nn):
    x=count_1_digits(mask)
    for j in range(n):
        if (mask & (1<<j)) == 0 :
            i=mask | (1<<j)
            dp[i]=min(dp[i],dp[mask]+cost[x][j])

print(dp[nn-1])

