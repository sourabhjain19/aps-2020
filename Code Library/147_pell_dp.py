def pell(n):

    pellseq=[0]*n
    
    pellseq[0]=1
    
    pellseq[1]=2

    for i in range(2,n):
        pellseq[i]=2*pellseq[i-1]+pellseq[i-2]

    return pellseq

print(*pell(20))