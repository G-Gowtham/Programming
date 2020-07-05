n,k = map(int,input().strip().split())
a = list(map(int,input().strip().split()))
b = list(map(int,input().strip().split()))

c = [0]*n

for i in range(n):
    c[i] = a[i]*b[i]

sumi = maxi = sum(c)
x = k*2

for i in range(n):
    maxi = max(maxi,sumi-c[i]+((a[i]+x)*b[i]))
    maxi = max(maxi,sumi-c[i]+((a[i]-x)*b[i]))    

print(maxi)
