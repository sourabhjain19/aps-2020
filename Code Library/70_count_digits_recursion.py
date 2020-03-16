count=0
def count_digits(num):
    global count
    if num>0:
        count+=1
        num=int(num/10)
        count_digits(num)
    else:
        return count

count_digits(12334)
print(count)