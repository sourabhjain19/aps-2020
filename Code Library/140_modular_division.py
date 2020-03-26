#Given three positive numbers a, b and m. Compute a/b under modulo m. 
#The task is basically to find a number c such that (b * c) % m = a % m.

import math

def modinverse(b,m):
    temp=math.gcd(b,m);
    if temp!=1:
        return -1
    else:
        return b**(m-2)%m

def modular_division(a,b,m):
    a=a%m
    inverse=modinverse(b,m)
    if inverse==-1:
        print("Division not defined")
    else:
        print((inverse*a)%m)

modular_division(8,3,5)
