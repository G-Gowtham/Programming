def fn():
    r,c = map(int,input().strip().split())
    mat = []

    for i in range(r):
        mat.append(list(map(int,input().strip().split())))
    
    a = list(map(int,input().strip().split()))
    
    new_mat = []
    r_start = 0
    r_end = r
    c_start = 0
    c_end = c
    k = []

    while r_start<r_end and c_start<c_end:
        k = []
        for i in range(c_start,c_end):
            k.append(mat[r_start][i])
        
        r_start += 1

        for i in range(r_start,r_end):
            k.append(mat[i][c_end-1])
        
        c_end -= 1

        if(r_start != r_end):
            for i in range(c_end-1,c_start-1,-1):
                k.append(mat[r_end-1][i])
        r_end -= 1

        if c_start != c_end:
            for i in range(r_end-1,r_start-1,-1):
                k.append(mat[i][c_start])
        
        c_start += 1

        new_mat.append(k)
    
    
    for i in range(len(a)):
        if i+1&1:
            





fn()