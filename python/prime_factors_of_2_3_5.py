a = [1]*10001
def fn():
    next_2 = 2
    next_3 = 3
    next_5 = 5
    i2,i3,i5 = [0]*3
    for i in range(1,10001):
        a[i] = min(next_2,next_3,next_5)
        if a[i] == next_2:
            i2 += 1
            next_2 = a[i2]*2
        if a[i] == next_3:
            i3 += 1
            next_3 = a[i3]*3
        if a[i] == next_5:
            i5 += 1
            next_5 = a[i5]*5
fn()
for _ in range(int(input().strip())):
    n = int(input().strip())
    print(a[n-1])