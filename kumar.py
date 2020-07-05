from math import ceil,floor

def check(s,e,check_start,check_end):
    if(check_start <= s < check_end):
        return 1
    if(check_start < e <=check_end):
        return 1
    
    return 0


def fn():
    n = 2
    n_list = [[8.00,20.00],[10.00,19.00]]
    a = [[8.00,9.30],[10.30,11.30],[12.30,14.00],[15.00,16.30],[17.30,18.30],[19.30,20.00],[10.30,12.00],[13.30,15.00],[16.30,18.00]]

    availble_hours = []
    start = []
    end = []
    for i in n_list:
        start.append(i[0])
        end.append(i[1])

    start.sort()
    end.sort()

    t_start = start[len(start)-1]
    t_end = end[0]

    # a.sort(key = lambda x : x[1])

    # a.sort()

    
    gen_list = []

    for i in range(floor(t_start),ceil(t_end)+1):
        tmp = []
        tmp.append(float(str(i)+".00"))
        tmp.append(float(str(i)+".30"))
        gen_list.append(tmp)

    miss = []

    for i in range(len(gen_list)-1):
        tmp = []
        tmp.append(gen_list[i][1])
        tmp.append(gen_list[i+1][0])
        miss.append(tmp)
    
    gen_list += miss

    #print(t_start,t_end)
    #print(a)
    #print(gen_list)

    out = []
    flag = 0

    for i in gen_list:
        for j in a:
            x = j[0]
            y = j[1]
            if(i[0]<t_start or i[1]>t_end):
                flag = 1
                break
            if(check(i[0],i[1],j[0],j[1])):
                flag = 1
                break

        if(flag==0):
            out.append(i)
        flag = 0
    
    out.sort()
    print(out)

fn()