
def max_area_histogram(histogram,b,h): 
	
	stack = list() 

	max_area = 0

	index = 0
	while index < len(histogram): 
		


		if (not stack) or (histogram[stack[-1]] <= histogram[index]): 
			stack.append(index) 
			index += 1

 
		else: 
			top_of_stack = stack.pop() 

			area = (histogram[top_of_stack] *
				((index - stack[-1] - 1) 
				if stack else index)) 

			max_area = max(max_area, area) 

	while stack: 
		
		top_of_stack = stack.pop() 

		area = (histogram[top_of_stack] *
			((index - stack[-1] - 1) 
				if stack else index)) 

		max_area = max(max_area, area*b*h) 

	return max_area 

n = int(input().strip())
b,h = map(int,input().strip().split())
hist = list(map(int,input().strip().split()))

print((sum(hist)*h*b-max_area_histogram(hist,b,h))) 

