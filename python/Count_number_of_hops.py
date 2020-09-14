ans = [0]*51
ans[0] = 1
ans[1] = 1
ans[2] = 2

for i in range(3,51):
    ans[i] = ans[i-1]+ans[i-2]+ans[i-3]

def fn():
    n = int(input().strip())
    print(ans[n])
    
for _ in range(int(input().strip())):
    fn()