a = [1]
for i in range(1,1001):
    a.append(i*a[i-1])

for _ in range(int(input().strip())):
    n = int(input().strip())
    print(a[n])