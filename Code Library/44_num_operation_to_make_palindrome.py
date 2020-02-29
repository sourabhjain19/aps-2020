arr="abcab"
i=0
j=len(arr)-1
count=0
while i<j:
    if arr[i]!=arr[j]:
        count+=1
    i+=1
    j-=1

print(count)