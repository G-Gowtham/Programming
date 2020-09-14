def fn():
    s = input().strip()
    a_count = 0
    b_count = 0
    c_count = 0

    for i in range(len(s)):
        if(s[i] == 'a'):
            a_count = 1+2*a_count
        elif(s[i] == 'b'):
            b_count = a_count + 2*b_count
        else:
            c_count = b_count + 2*c_count

    print(c_count) 

for _ in range(int(input().strip())):
    fn()