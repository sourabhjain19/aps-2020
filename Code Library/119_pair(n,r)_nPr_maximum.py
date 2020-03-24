# Find a pair (n,r) in an integer array such that value of nPr is maximum.

#finding n and r such that both are maximum

arr=[1,2,5,3,6,2]

arr.sort()

n=arr[len(arr)-1]
r=arr[len(arr)-2]

print(n,r)