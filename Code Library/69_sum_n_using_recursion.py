def sum(num):
    if num!=0:
        return num+sum(num-1)
    else:
        return num

num=10
print(sum(num))
