import itertools

l=[1,2,3]

per=itertools.permutations(l)

comb=itertools.combinations(l,3)
comb=list(comb)
comb.extend(itertools.combinations(l,2))
comb=list(comb)
comb.extend(itertools.combinations(l,1))


print("Permutation =")

for p in per:
    print(*p)

print("Combination =")

for c in comb:
    print(*c)