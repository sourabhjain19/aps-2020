#It describes the maximum number of pieces (or bounded/unbounded regions) of a circle 
#(a pancake or pizza is usually used to describe the situation) that can be made with a given number of straight cuts. 

# 1 2 4 7 16 22 .....


nn=int(input())

for n in range(nn):
    p=(n*n+n+2)//2
    print(p,end=" ")