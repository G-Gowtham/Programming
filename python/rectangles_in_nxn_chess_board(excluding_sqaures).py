for _ in range(int(input())):
    n = int(input().strip())
    print((n*(n+1)//2)**2-(n*(n+1)*(2*n+1))//6)
