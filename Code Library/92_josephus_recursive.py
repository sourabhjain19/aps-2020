def josephus(n, k): 
  
      if (n == 1):
          return 1
      else:
          return (josephus(n - 1, k) + k-1) % n + 1

n = 7
k = 3
  
print(josephus(n, k)) 
  