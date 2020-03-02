# Python Program to implement 
# iterative segment tree. 

from sys import maxsize 
INT_MIN = -maxsize 

def construct_segment_tree(a: list, n: int): 
	global segtree 

	for i in range(n): 
		segtree[n + i] = a[i] 

	for i in range(n - 1, 0, -1): 
		segtree[i] = max(segtree[2 * i], segtree[2 * i + 1]) 

def update(pos: int, value: int, n: int): 
	global segtree 

	pos += n 

	segtree[pos] = value 

	while pos > 1: 

		pos //= 2

		segtree[pos] = max(segtree[2 * pos], segtree[2 * pos + 1]) 

def range_query(left: int, right: int, n: int) -> int: 
	global segtree 

	left += n 
	right += n 

	ma = INT_MIN 
	while left < right: 

		if left & 1: 
			ma = max(ma, segtree[left]) 

			left += 1

		if right & 1: 

			right -= 1

			ma = max(ma, segtree[right]) 

		left //= 2
		right //= 2
	return ma 


# Driver Code 
if __name__ == "__main__": 
	a = [2, 6, 10, 4, 7, 28, 9, 11, 6, 33] 
	n = len(a) 

	segtree = [0] * (2 * n) 
	construct_segment_tree(a, n) 

	left = 1
	right = 5
	print("Maximum in range %d to %d is %d" %
		(left, right, range_query(left, right + 1, n))) 

	index = 5
	value = 32

	update(index, value, n) 

	left = 2
	right = 8
	print("Maximum in range %d to %d is %d" %
		(left, right, range_query(left, right + 1, n))) 
