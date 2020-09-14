
def fn():
    a = input().strip()
    b = input().strip()
    alpha = [0]*75

    for i in a:
        alpha[ord(i)-65] += 1
    
    for i in b:
        alpha[ord(i)-65] -= 1

    flag = 0

    for i in alpha:
        if i>0:
            flag = 1
            break

    if flag:
        print("NO")
    else:
        print("YES")
        
fn()


