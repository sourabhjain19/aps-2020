
n=int(input())
result=[0 for _ in range(n+1)]
result[0]=1
temp = [0 for _ in range(n+1)]
temp[0] = 1
lookup=["" for _ in range(n+1)]

lookup[0] = ""

for i in range(3,n+1):
    result[i]+=result[i-3]
    lookup[i]+=lookup[i-3]
    temp[i]=result[i]
    if result[i]==1:
        lookup[i]+="3"
lookup[n]+="\n"
for i in range(5,n+1):
    result[i] += result[i-5]
    lookup[i]+=lookup[i-5]
    if result[i]-temp[i] == 1:
        lookup[i] += "5"
    temp[i]=result[i]
lookup[n] += "\n"
for i in range(10,n+1):
    result[i] += result[i-10]
    lookup[i]+=lookup[i-10]
    if result[i]-temp[i] == 1:
        lookup[i] += "10"
print(lookup[n])
