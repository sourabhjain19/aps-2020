def kadane(a,size):
    max=-float('infinity')
    tmax=0
    start=0
    end=0
    s=0
    for i in range(size):
        tmax=tmax+a[i]
        if max<tmax:
            max=tmax
            start=s
            end=i
        if tmax<0:
            tmax=0
            s=i+1
    return max,start,end

a=[2,3,-3,5,1,6,-2]

max,start,end=kadane(a,len(a))
print(max,start,end);
