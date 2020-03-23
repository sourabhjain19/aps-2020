string="HelloWorldHelloWorldHelloWorldHello"

count=0

s=0
while s<len(string):
    l=string.find('HelloWorldHello',s)

    if l!=-1:
        count+=1
        s=l+1
    
    else:
        break
    

print(count)