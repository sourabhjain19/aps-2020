def noOfdigits(num):
    count=0
    while num:
        num=int(num/10)
        count+=1
    return count

num=34545
temp=num
revnum=0
digits=noOfdigits(num)-1
while(temp):
    revnum+=(temp%10)*(10**digits)
    temp=int(temp/10)
    digits-=1

print(revnum)


