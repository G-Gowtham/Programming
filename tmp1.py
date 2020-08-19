
def spiralPrint(m, n, a) : 
	k = 0; l = 0

	while (k < m and l < n) : 
		
		for i in range(l, n) : 
			print(a[k][i], end = " ") 
			
		k += 1

		# Print the last column from 
		# the remaining columns 
		for i in range(k, m) : 
			print(a[i][n - 1], end = " ") 
			
		n -= 1

		# Print the last row from 
		# the remaining rows 
		if ( k < m) : 
			
			for i in range(n - 1, (l - 1), -1) : 
				print(a[m - 1][i], end = " ") 
			
			m -= 1
		
		# Print the first column from 
		# the remaining columns 
		if (l < n) : 
			for i in range(m - 1, k - 1, -1) : 
				print(a[i][l], end = " ") 
			
			l += 1

r,c = map(int,input().strip().split())
mat = []

for i in range(r):
    mat.append(list(map(int,input().strip().split())))

a = list(map(int,input().strip().split()))
new_mat = []
