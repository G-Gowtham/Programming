
ans = 0

def fn():
    global ans
    n = int(input().strip())
    k = int(input().strip())
    path = [0]*(k+1)
    tank_cap = [0]*(k+1)
    req = [0]*(k+1)
    curr = [0]*(k+1)
    #wat_day = [0]*(k+1)

    for i in range(k):
        a,b,c = input().strip().split()
        x = int(a[1])
        tank_cap[x] = int(c)
        req[x] = int(b)
    
    con = int(input().strip())


    for i in range(con):
        a,b = input().strip().split('_')
        if(a != 'F'):
            path[int(b[1])] = int(a[1])
    
    #no of day check req

    def req_water(mem,day):
        global ans
        if(mem == 0):
            return
        curr[mem] = tank_cap[mem]
        ans = ans+tank_cap[mem]
        req_water(path[mem],day)



    for i in range(1,n+1):

        for j in range(k,-1,-1):
            if(curr[j] -req[j] < 0):
                req_water(j,i)
        
        for j in range(k,-1,-1):
            curr[j] -= req[j]
    
    print(ans)
    

fn()
