def xor(arr):
    res=arr[0]
    for i in arr:
        res=res^i
    return res

arr=[1,3,4,6,7]
n=7

natural=[]

for i in range(1,n+1):
    natural.append(i)

res=xor(arr)^xor(natural)
res1=0
res2=0
for i in range(len(bin(res))-2):
    if res & 1<<i:
        for j in arr:
            if j & 1<<i:
                res1=res1^j
            else:
                res2=res2^j
        for j in natural:
            if j & 1<<i:
                res1=res1^j
            else:
                res2=res2^j
        break

print(res1,res2)        
