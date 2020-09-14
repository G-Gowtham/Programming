def mul(a,b):
    lsum = 0
    res = [[0 for x in range(2)] for y in range(2)] 
    for i in range(2): 
        for j in range(2): 
            for k in range(2): 
                lsum += a[i][k] * b[k][j] 
            res[i][j] = lsum % 1000000007
            lsum = 0
    return res


def exp(A,n):
	if n ==0:
		return [[1,0],[0,1]]
	c = exp(A,n//2)
	c = mul(c,c)
	if n % 2:
		return mul(A,c)
	else:
		return c

for i in range(int(input())):
	n = int( input() )
	print( exp( [ [0,1], [1,1] ], n )[0][1] )
