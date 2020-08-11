
def fn():
    a,b,c = input().strip().split()
    vowels = ['a','e','i','o','u']
    ans_a = ans_b = ""

    for i in a:
        if i in vowels:
            ans_a += '&'
        else:
            ans_a += i
    
    for i in b:
        if i in vowels:
            ans_b += i
        else:
            ans_b += '@'
    
    print(ans_a,ans_b,c.upper())

     
fn()


