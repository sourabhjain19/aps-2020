l=[2,4,6,3,2,62]
k=4

l1=l[len(l)-k:]+l[:len(l)-k]
print("Right Shift of l = ", *l1)

l2=l[k:]+l[:k]
print("Left Shift of l = ", *l2)