#This series has significant importance as
    #Alcuin Sequence a(n) is the number of triangles with integer sides and the perimeter of the triangle is n.
    #Alcuin Sequence a(n) is the number of triangles with distinct integer sides and the perimeter of the triangle is n+6

import math

nn=int(input())

for n in range(nn):
    res = (round((n * n) / 12) - math.floor(n / 4) * math.floor((n + 2) / 4))
    print(res,end=" ")