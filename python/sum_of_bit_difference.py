#a = [1,3,5]
#a = [1,2]
#b = []
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    count = 0
    bin_string = ""
    for i in range(0,len(a)-1):
        for j in range(i,len(a)):
            bin_string += (bin(a[i]^a[j])[2:])
            #b.append(bin(a[i]^a[j])[2:])

    for i in range(len(bin_string)):
        if bin_string[i] == "1":
            count += 1
    print(count*2)

for _ in range(int(input())):
    fn()
