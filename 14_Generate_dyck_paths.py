import itertools
n=int(input())
str=""
for i in range(n):
    str+='X'
for i in range(n):
    str+='Y'
seq=itertools.permutations(str)
seq=set(seq)
check=[]
count=0
for s in seq:
    flag=0
    for i in s:
        try:
            if i=='X':
                check.append('X')
            else:
                check.pop()
        except:
            flag=1
            break
    if flag==0 and len(check)==0:
        count+=1
        print(''.join(s))
print(count)