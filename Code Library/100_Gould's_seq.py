# Gould’s sequence is an integer sequence whose nth term tells the count of odd numbers in n-1th row of the pascal triangle. 
# This sequence consist of only power’s of 2.

def gouldSequence(n): 
  
    for row_num in range (1, n):  
      
        count = 1
        c = 1
  
        for i in range (1, row_num):
            c = c * (row_num - i) / i 

            if (c % 2 == 1): 
                count += 1
  
        print(count, end = " ") 
          
n = 16; 
  
gouldSequence(n) 
  