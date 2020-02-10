l=list(map(int,input().split()))
lis=[1 for _ in range(len(l))]
for i in range(len(l)):
    for j in range(i):
        if l[i]>l[j] and lis[j]+1>lis[i]:
            lis[i]=lis[j]+1
subseq=[]
t1=lis.index(max(lis))
t=lis.index(max(lis))
subseq.append(l[t1])
for i in range(t1,-1,-1):
    if lis[i]+1 == lis[t] and l[i] <= l[t]:
        subseq.append(l[i])
        t=i
subseq=subseq[::-1]
print(subseq)