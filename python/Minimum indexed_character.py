def fn():
    string = input().strip()
    pat = input().strip()

    for i in string:
        if i in  pat:
            return i
    
    return "No character present"
    
for _ in range(int(input().strip())):
    print(fn())