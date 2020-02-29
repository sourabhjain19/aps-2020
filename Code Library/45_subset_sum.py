sum=9
ss=[1,2,3,5,7]
a=[[0 for i in range(sum+1)] for j in range(len(ss)+1)]
for i in range(len(ss)+1):
    a[i][0]=1
for i in range(1,len(ss)+1):
    for j in range(1,sum+1):
        if a[i-1][j]==1:
            a[i][j]=1
        else:
            if j<ss[i-1]:
                a[i][j]=0
            else:
                a[i][j]=a[i-1][j-ss[i-1]]

print(a)