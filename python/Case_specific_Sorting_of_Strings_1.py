mod = 1000000007

def fn():
    n= int(input().strip())
    s = input().strip()

    big = [0]*26
    small = [0]*26

    for i in s:
        if ord(i)<97:
            big[ord(i)-65] += 1
        else:
            small[ord(i)-97] += 1

    ans = ""
    j = k = 0

    for i in s:
        if ord(i)<97:
            while big[j] == 0:
                j+=1

            ans += chr(65+j)
            big[j] -= 1

        else:
            while small[k] == 0:
                k+=1

            ans += chr(97+k)
            small[k] -= 1

    print(ans)


for _ in range(int(input().strip())):
    fn()