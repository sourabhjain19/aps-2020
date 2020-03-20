#  Numbers which have repeating Aliquot sequence of length 1 are called Perfect Numbers. For example 6, sum of its proper divisors is 6.
# Numbers which have repeating Aliquot sequence of length 2 are called Amicable numbers. For example 220 is a Amicable Number.
# Numbers which have repeating Aliquot sequence of length 3 are called sociable number.

# Aliquot Sequence of a number starts with itself,
# remaining terms of the sequence are sum of proper divisors of immediate previous term.

from math import sqrt


def getSum(n):
    summ = 0

    for i in range(1, int(sqrt(n)) + 1):
        if n % i == 0:

            if n // i == i:
                summ += i

            else:
                summ += i
                summ += n // i

    return summ - n


def printAliquot(n):

    print(n, end=" ")
    s = set()
    s.add(n)

    nextt = 0
    while n > 0:

        n = getSum(n)

        if n in s:
            print("Further Repeats")
            break

        print(n, end=" ")
        s.add(n)


if __name__ == "__main__":
    printAliquot(12)
