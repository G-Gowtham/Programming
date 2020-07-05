n,k = map(int,input().strip().split())
a = list(map(int,input().strip().split()))
b = list(map(int,input().strip().split()))

c = [0]*n

for i in range(n):
    c[i] = a[i]*b[i]

sumi = mini = sum(c)
x = k*2

for i in range(n):
    mini = min(mini,sumi-c[i]+((a[i]+x)*b[i]))
    mini = min(mini,sumi-c[i]+((a[i]-x)*b[i]))    

print(mini)
