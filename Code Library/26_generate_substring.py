def compute(str):
    for le in range(1,len(str)+1):
        for i in range(len(str)-le+1):
            j=i+le-1
            for k in range(i,j+1):
                print(str[k],end='')
            print()

str=input()
compute(str)