
def fn():
    s = input().strip()
    vowels = ['a','e','i','o','u']        
    v_count = 0
    c_count = 0

    flag = 0

    for i in s:

        if v_count == 5 or c_count == 3:
            flag = 1
            break

        #print(v_count,c_count)
        if i.isalpha():
            if i in vowels:
                v_count += 1
                c_count = 0
            else:
                c_count += 1
                v_count = 0 
        else:
            v_count = 0
            c_count = 0

    print(flag)

fn()


