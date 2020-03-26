#Amicable pair is the no whose sum of divisor is eaual to some other no inturn that no's sum of divisors is equal to previous no

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

arr=[220, 2, 5, 284, 345]

for i in arr:
    summ=getSum(i)
    if summ in arr and summ!=i:
        summ1=getSum(arr[arr.index(summ)])
        if summ1==i:
            print(i,summ)
            arr.remove(summ)
