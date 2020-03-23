#Converting list into no of occurance of each element in dictionary

import collections

l=[1,1,3,4,4,7,8,7,7,1,3,2]

dictl=collections.Counter(l)

print(dictl)