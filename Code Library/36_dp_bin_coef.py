n=5
k=5
c=[ [0 for i in range(k+1)] for j in range(n+1) ]

for i in range(n+1):
    for j in range(min(i,k)+1):
        if j==0 or i==j:
            c[i][j]=1
        else:
            c[i][j]=c[i-1][j-1]+c[i-1][j]

print(c)