
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    found = 0
    for i in range(len(a)-1):
        if a[i] in a[i+1:]:
            found = 1
            print(i+1)
            break
    if found == 0:
        print("-1")

for _ in range(int(input().strip())):
    fn()
    
