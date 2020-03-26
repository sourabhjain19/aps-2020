#Pell is a sequence of no whose formula is 2*A(n-1)+A(n-2)

def pell(n):
    if n==1:
        return 1
    if n==2:
        return 2
    return 2*pell(n-1)+pell(n-2)

print(pell(20))