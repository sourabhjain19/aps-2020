#Color n boxes such that m conseq boxes are uniques.

n=10
m=5

res=1
for i in range(1,m+1):
    res=res*i

print(res)