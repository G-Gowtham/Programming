mod = 1000000007

def fn():
    n = int(input().strip())
    s = input().strip()
    
    freq = [ 0 for i in range(26)]

    for i in s:
        freq[ord(i)-97] += 1
    
    for i in s:
        if freq[ord(i)-97] == 1:
            print(i)
            return
    
    print(-1)


for _ in range(int(input().strip())):
    fn()