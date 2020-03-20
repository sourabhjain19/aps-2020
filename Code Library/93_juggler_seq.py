#The last Term in juggler seq is always 1
#If juggler seq reaches 1 then all subsequent terms are 1
#it first increases to peak value then starts decreasinf

import math

def juggler(n):
    a=n
    print(a)
    while(a!=1):
        if(a%2==0):
            b=math.floor(math.sqrt(a))
        else:
            b=math.floor(math.sqrt(a)*math.sqrt(a)*math.sqrt(a))
        print(b)
        a=b

juggler(int(input()))
