# dic = {"lr", "m", "lrm", "hcdar", "wk"}
# s = "hcdarlrm"
def fn(w = "", string = "", words = [], out = []):
    if w in dic:
        fn(string[:1],string[1:],words[:]+[w],out)
    if string != "":
        fn(w+string[:1],string[1:],words[:],out)
    elif w == "":
        out.append(words) 

for _ in range(int(input().strip())):
    x = int(input())
    dic = set(list(input().strip().split()))
    s = input().strip()
    out = []
    fn(string=s, out=out)
    for i in range(len(out)):
        print("(",end = '')
        for j in range(len(out[i])):
            if j == len(out[i])-1:
                print(out[i][j],end= '')
            else:
                print(out[i][j],"",end = '')
        print(")",end = '')
    print()
