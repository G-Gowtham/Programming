def fn():
    s = input().strip()
    s = s.replace("RYY"," ")
    s = s.replace("RY"," ")
    s = s.replace("R"," ")
    s = s.replace(" ","")
    #print(s)
    if len(s) == 0:
        print("YES")
    else:
        print("NO")

for _ in range(int(input().strip())):
    fn()

# 3
# RY
# RWR
# RRYY RRRYYY