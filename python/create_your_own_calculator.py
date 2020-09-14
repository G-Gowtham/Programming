from numpy import linalg
import numpy as np

def fn():
    l = list(map(float,input().strip().split()))
    m = list(map(float,input().strip().split()))
    n = list(map(float,input().strip().split()))
    mat = np.matrix([[l[0],l[1],l[2]],[m[0],m[1],m[2]],[n[0],n[1],n[2]]])
    delta = linalg.det(mat)
    if(delta == 0):
        print("0")
    else:
        mat_inv = linalg.inv(mat)
        d = np.array([l[3],m[3],n[3]])
        ans = np.dot(mat_inv,d)
        ans = np.floor(ans)
        ans = np.array(ans)
        print(*ans)
        print(int(ans[0][0]),int(ans[0][1]),int(ans[0][2]))

for _ in range(int(input().strip())):
    fn()