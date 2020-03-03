#To check whether the string contains all 26 letters.
s='Quick zephyrs blow, vexing daft Jim'

temp=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

s=s.lower()
flag=0
for i in temp:
    if i not in s:
        flag=1
        break

if flag==0:
    print("Pangram");
else:
    print('Not a Pangram');