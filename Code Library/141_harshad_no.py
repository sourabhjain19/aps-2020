# It is a whole no that is divisible by sum of its digits


def harshad(n):
    sum = 0
    temp = n
    while n!=0:
        sum += n % 10
        n = int(n/10)

    if temp % sum == 0:
        return 1
    else:
        return 0

n=int(input())
for i in range(1,n):
    if harshad(i):
        print(i)