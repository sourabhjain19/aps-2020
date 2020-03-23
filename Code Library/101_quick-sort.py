def partition(arr,low,high):
    i=low-1
    piviot=arr[high]

    for j in range(low,high):
        
        if arr[j]<=piviot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
        
    arr[high],arr[i+1]=arr[i+1],arr[high]

    return i+1

def quicksort(arr,low,high):

    if low < high :
        
        pi=partition(arr,low,high)

        arr=quicksort(arr,low,pi-1)

        arr=quicksort(arr,pi+1,high)
    
    return arr

l=[4,2,6,3,2,34]
print(quicksort(l,0,len(l)-1))