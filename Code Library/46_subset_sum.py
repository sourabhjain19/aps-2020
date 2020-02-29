def subsetsum_bitwise(arr,s):
    for i in range(1,2**n):
        sum=0
        for j in range(len(arr)):
            if (i>>j) & 1:
                sum+=arr[j]
        if sum==s:
            print('Yes')
            return
    print('No')

s=5
n=4
arr=[-1,2,4,121]
subsetsum_bitwise(arr,s)