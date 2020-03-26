import math

def getSum(n):
    summ = 0

    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:

            if n // i == i:
                summ += i

            else:
                summ += i
                summ += n // i

    return summ+1

n=21
summ=getSum(n)
if summ>n:
    print("Abundant Number and abundance is ",summ-n)
else:
    print("Not a Abundant Number")
