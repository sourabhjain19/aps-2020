#Only accress elements which have boolean value true
import itertools

givenList=[1,2,3,4,5]
givenBooleanList=[True,False,True,True,False]

res=itertools.compress(givenList,givenBooleanList)

print(*res)