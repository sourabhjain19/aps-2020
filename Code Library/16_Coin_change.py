n=int(input())
s=list(map(int,input().split()))
result=[0 for _ in range(n+1)]
result[0]=1
for i in range(len(s)):
    for j in range(s[i],n+1):
        result[j]+=result[j-s[i]]
print(result[n])