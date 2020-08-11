
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    k = int(input().strip()) 

    while len(a) > 1:
        a.insert(len(a)//2,(a.pop(0)+a.pop(-1))%k)
        #print(a)

    print(a[0]%k)

fn()


