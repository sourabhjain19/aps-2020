def kadane(a,size):
    max=-float('infinity')
    tmax=0
    for i in range(size):
        tmax=tmax+a[i]
        if max<tmax:
            max=tmax
        if tmax<0:
            tmax=0
    return max

a=[2,3,-3,5,1,6,-2]
print(kadane(a,len(a)))
