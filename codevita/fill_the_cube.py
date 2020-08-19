n=int(input())
l=[]
c=0
for i in range(n):
    l.append(list(map(str,input().split())))
for j in range(n):
    for k in range(n):
        if l[j][k]=='D':
            c+=1

print(math.floor(math.sqrt(c)))