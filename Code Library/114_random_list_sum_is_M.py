from random import randint

m=10
n=8

temp=[0]*m

for i in range(n):
    temp[randint(0,n)%m]+=1

print(*temp)