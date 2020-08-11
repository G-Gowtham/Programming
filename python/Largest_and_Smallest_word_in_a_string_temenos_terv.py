
def fn():
    a = input().strip().split()
    small = big = ""
    mini = float("inf")
    maxi = float("-inf")

    for i in a:
        if len(i)<mini:
            mini = len(i)
            small = i
        if len(i)>maxi:
            maxi = len(i)
            big = i
            
    print(big,small)
     
fn()


