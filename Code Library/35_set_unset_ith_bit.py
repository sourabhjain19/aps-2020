x=6
i=0
print("Before, x = ",x) 
x = x | 1<<i
print("After set, x = ",x)
x = x & ~(1 << i)
print("After unset, x = ", x)
