#Average of two numbers x and y can be calculated using bit operations as:
    #avg=(x & y) + ((x ^ y) >> 1) 
#This method will give result as floor value of the calculated average.

x=1
y=2

avg = (x & y) + ((x ^ y) >> 1)

print(avg)