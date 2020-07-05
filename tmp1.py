# for _ in range(int(input())):
#     n = int(input())
#     res = 1
#     while(n > 0):
#         res = (res * 2) % 100000
#         n -= 1
#     res = (res - 1 + 100000) % 100000
#     print(res)


# Inverses

# n = int(input())
# l = [2,3,5,7,11,13]
# c = n
# for i in l:
#     if n%i==0:
#         c = c - c//i
# print(c)

# # fish in the pacific


# #include<bits/stdc++.h>
# #define tMod 1000000007
# using namespace std;
# typedef long long int ll;
# typedef struct {
#  ll mat[2][2];
# } mat;

# mat matrixMult(mat A,mat B)
# {
# 	mat C;
# 	C.mat[0][0]=(A.mat[0][0]*B.mat[0][0]+A.mat[0][1]*B.mat[1][0])%tMod;
# 	C.mat[0][1]=(A.mat[0][0]*B.mat[0][1]+A.mat[0][1]*B.mat[1][1])%tMod;
# 	C.mat[1][0]=(A.mat[1][0]*B.mat[0][0]+A.mat[1][1]*B.mat[1][0])%tMod;
# 	C.mat[1][1]=(A.mat[1][0]*B.mat[0][1]+A.mat[1][1]*B.mat[1][1])%tMod;
# 	return C;
# }
# mat matrixPower(mat A, ll exp)
# {
# 	if (exp==1) 
# 	    return A;
# 	mat Acop;
# 	Acop.mat[0][0] =A.mat[0][0]; 
# 	Acop.mat[0][1] =A.mat[0][1]; 
# 	Acop.mat[1][0] =A.mat[1][0]; 
# 	Acop.mat[1][1] =A.mat[1][1]; 
# 	if (exp%2==0)
# 	{
# 		A=matrixPower(A,exp/2);
# 		return (matrixMult(A,A));
# 	}
# 	else
# 	{
# 		A= matrixPower(A, exp - 1);
#         return matrixMult(A, Acop);	
# 	}
# }
# int main()
# {
# 	int t;
# 	cin>>t;
# 	while(t--)
# 	{
# 		ll a,b,n;
# 		mat AMat,BMat;
# 		cin>>a>>b>>n;
# 		if (n==0)
# 		{
# 			cout<<a<<endl;
# 			continue;
# 		}
# 		else if (n==1)
# 		{
# 			cout<<b<<endl;
# 			continue;
# 		}
# 		AMat.mat[0][0]=1;
# 		AMat.mat[0][1]=1;
# 		AMat.mat[1][0]=1;
# 		AMat.mat[1][1]=0;
# 	    BMat=matrixPower(AMat,n-1);
# 	    cout<<(BMat.mat[0][0]*b + BMat.mat[0][1]*a)%tMod<<endl;
# 	}
# 	return 0;
# }

# Rise of Fall of the Number Kingdom

# n=int(input())
# ans,i=1,2
# while(i*i<=n):
# 	if n%i==0:
# 		ans=n//i
# 	i+=1
# print(ans)	

# Piano Concert

# for _ in range(int(input())):
#     n = int(input())
#     res = 1
#     while(n > 0):
#         res = (res * 2) % 100000
#         n -= 1
#     res = (res - 1 + 100000) % 100000
#     print(res)

# Jurassic Park

# row,col=map(int,input().split())
# a=list(map(int,input().split()))
# total=0
# jurassic=[]
# for i in range(row):
#     jurassic.append(list(input().split()))
#     total+=jurassic[i].count("G")
# jurassic[a[0]-1][a[1]-1]="GA"
# jurassic[a[2]-1][a[3]-1]="GA"
# jurassic[a[4]-1][a[5]-1]="GA"
# jurassic[a[6]-1][a[7]-1]="GC"  
# safe_index=0
# for i in range (row):
#     for j in range(col):
#         if jurassic[i][j]=="GA":safe_index+=1
#         elif jurassic[i][j]=="G":
#             if i==0:
#                 if j==0:
#                     if jurassic[i][j]=="G" or  jurassic[i][j+1]=="G" or  jurassic[i+1][j]=="GA" or  jurassic[i][j+1]=="GA" or  (jurassic[i+1][j]=="W" and jurassic[i][j+1]=="W"):
#                         safe_index+=1
#                 elif j==col-1:     
#                     if jurassic[i][j-1]=="G" or  jurassic[i+1][j]=="G" or  jurassic[i][j-1]=="GA" or  jurassic[i+1][j]=="GA" or  (jurassic[i][j-1]=="W" and jurassic[i+1][j]=="W"):
#                         safe_index+=1
#                 else:
#                     if jurassic[i][j-1]=="G" or  jurassic[i][j+1]=="G" or  jurassic[i+1][j]=="G" or  jurassic[i][j-1]=="GA" or  jurassic[i][j+1]=="GA" or jurassic[i+1][j]=="GA" or (jurassic[i][j-1]=="W" and  jurassic[i][j+1]=="W" and  jurassic[i+1][j]=="W"):
#                         safe_index+=1
#             elif i==row-1:
#                 if j==0:
#                     if jurassic[i-1][j]=="G" or  jurassic[i][j+1]=="G" or  jurassic[i-1][j]=="GA" or  jurassic[i][j+1]=="GA" or  (jurassic[i-1][j]=="W" and jurassic[i][j+1]=="W"):
#                         safe_index+=1
#                 elif j==col-1:     
#                     if jurassic[i-1][j]=="G" or  jurassic[i][j-1]=="G" or  jurassic[i-1][j]=="GA" or  jurassic[i][j-1]=="GA" or  (jurassic[i-1][j]=="W" and jurassic[i][j-1]=="W"):
#                         safe_index+=1
#                 else:
#                     if jurassic[i][j-1]=="G" or  jurassic[i-1][j]=="G" or  jurassic[i][j+1]=="G" or  jurassic[i][j-1]=="GA" or  jurassic[i-1][j]=="GA" or jurassic[i][j+1]=="GA" or (jurassic[i][j-1]=="W" and  jurassic[i-1][j]=="W" and  jurassic[i][j+1]=="W"):
#                         safe_index+=1
                
#             elif j==0:
#                 if((jurassic[i-1][j]=="G")or (jurassic[i][j+1]=="G")or(jurassic[i+1][j]=="G")or(jurassic[i-1][j]=="GA")or(jurassic[i][j+1]=="GA")or(jurassic[i+1][j]=="GA")or((jurassic[i-1][j]=="W")and(jurassic[i][j+1]=="W")and(jurassic[i+1][j]=="W"))):
#                         safe_index+=1
#             elif j==col-1:
#                 if((jurassic[i-1][j]=="G")or(jurassic[i][j-1]=="G")or(jurassic[i+1][j]=="G")or(jurassic[i-1][j]=="GA")or(jurassic[i][j-1]=="GA")or(jurassic[i+1][j]=="GA")or((jurassic[i-1][j]=="W")and(jurassic[i][j-1]=="W")and(jurassic[i+1][j]=="W"))):
#                         safe_index+=1
#             else:
#                  if((jurassic[i-1][j]=="G")or(jurassic[i][j+1]=="G")or(jurassic[i+1][j]=="G")or(jurassic[i][j-1]=="G")or(jurassic[i-1][j]=="GA")or(jurassic[i][j+1]=="GA")or(jurassic[i+1][j]=="GA")or(jurassic[i][j-1]=="GA")or((jurassic[i-1][j]=="W")and(jurassic[i][j+1]=="W")and(jurassic[i+1][j]=="W")and(jurassic[i][j-1]=="W"))):
#                         safe_index+=1
                        
# index=(safe_index*100)/total;
# print("%.2f"%index)

# Rope Bridge

# N=int(input())
# wp= list(map(int,input().split()))
# wh= list(map(int,input().split()))
# n = len(wp)
# m = len(wh)
# maxi = 0
# for i in range(n-1):
# 	if (wp[i]<wp[i+1]-1):
# 		heightDiff = abs(wh[i+1] - wh[i])
# 		gapLen = wp[i+1] - wp[i] - 1
# 		localMax = 0
# 		if (gapLen > heightDiff):
# 			low = max(wh[i+1], wh[i]) + 1
# 			remainingGap = gapLen - heightDiff - 1
# 			localMax = low + remainingGap/2
# 		else:
# 			localMax = min(wh[i+1], wh[i]) + gapLen;
# 		maxi = max(maxi, localMax);

# print(int(maxi))

# Maximum Product Array

# n, k = map(int, input().split())
# ar = list(map(int, input().split()))
# br = list(map(int, input().split()))

# s = mx = 0
# for i in range(n):
#     s += ar[i] * br[i]
#     mx = max(mx, abs(br[i]))

# print(s + 2 * k * mx)

# Combined Study

# #include<bits/stdc++.h>
# using namespace std;
# typedef long long int ll;

# int main()
# {
#     int n, i, j, nine=0;
#     string s;
    
#     cin>>s;
#     n = s.length();

#     for(i=0 ; i<n ; ++i)
#         if(s[i]=='9')
#             nine++;
    
#     if(nine == n)
#     {
#         cout<<'1';
#         for(i=0 ; i<n-1 ; ++i)
#             cout<<'0';
#         cout<<'1';
        
#         return 0;
#     }
    
#     bool flag = false;
    
#     i = n/2 - 1;
#     j = (n&1) ? (n/2+1) : n/2;

#     while(i>=0 && s[i]==s[j])
#         i--, j++;

#     if(i<0 || s[i] < s[j])
#         flag = true;
    
#     while(i>=0)
#         s[j++] = s[i--];
    
#     if(flag)
#     {
#         int carry = 1;

#         if(n&1)
#         {
#             if(s[n/2] == '9')
#             {
#                 s[n/2] = '0';
#             }
#             else
#             {
#                 s[n/2]++;
#                 carry = 0;
#             }
#         }

#         i = n/2 - 1;
#         j = (n&1) ? (n/2+1) : n/2;

#         while(i >= 0 && carry>0)
#         {
#             if(s[i]=='9')
#                 s[i] = '0';
#             else
#             {
#                 s[i]++;
#                 carry = 0;
#             }
#             s[j++] = s[i--];
#         }
#     }
    
#     cout<<s<<endl;
    
#     return 0;
# }

# Commander of The Force

# n = int(input())
# k = bin(n)[2:]
# if(int(k[1::2])==0 and len(k)%2!=0):
#     print(int(k[::2],2))
# else:
#     print("RETURN")


# Flappy Bird

# def power(n,a):
#     m = 10**9 + 7
#     res = 1
#     while(a!=0):
#         if(a&1):
#             res=(res*n)%m
#         a = a>>1;
#         n = (n*n)%m
#     return res

    
# n,h = map(int,input().split())
# l = list(map(int,input().split()))
# k = 0
# for i in range(len(l)):
#     k = k + (power(2,l[i])-1)* h
#     if i!=n-1:
#         k = k - l[i]
# print(k%1000000007)

# Grooving monkey

# #include<bits/stdc++.h>
# using namespace std;
# int gcd(int n1, int n2) {
#     if (n2 != 0)
#         return gcd(n2, n1 % n2);
#     else
#         return n1;
# }
# int main() {
#   int l[1000],m[1000],i,j,size,k,c,t;
#   cin>>t;
#   while(t--)
#   {
#   cin>>size;
#   for (i=0;i<size;i++)
# 	cin>>l[i];

#   for (i=0,j=0;j<size;i++,j++)`
# 	{
#     	k=l[i];
# 		c=0;
# 		while(l[l[i]-1]!=k)
# 		{		
# 	        	i=l[i]-1;
# 	        	c+=1;
# 		}
# 		m[j]=c+1;
# 	}
#   k=m[0];
# for(i=1;i<j;i++)
# 	k=k*m[i]/gcd(k,m[i]);
#   cout<<k;
#  }
#   return 0;
# }

# Petrol Pump

# #include<bits/stdc++.h>
# using namespace std;
# typedef long long int ll;

# int main()
# {
#     int n, x, i, j, sum = 0;

#     vector<int> ar;

#     while(cin>>x)
#     {
#         ar.push_back(x);
#         sum += x;
#     }

#     n = ar.size();

#     int dp[n+1][sum+1];

#     for(i=0 ; i<=n ; ++i)
#         dp[i][0] = 1;
    
#     for(i=1 ; i<=sum ; ++i)
#         dp[0][i] = 0;

#     for(i=1 ; i<=n ; ++i)
#         for(j=1 ; j<=sum ; ++j)
#         {
#             dp[i][j] = dp[i-1][j];

#             if(ar[i-1] <= j)
#                 dp[i][j] = dp[i][j] | dp[i-1][j - ar[i-1]];
#         }

#     int ans = sum;
#     for(i=sum/2 ; i>=0 ; --i)
#         if(dp[n][i])
#         {
#             ans = sum - i;
#             break;
#         }
    
#     cout<<ans;
    
#     return 0;
# }


# Consecutive Prime Sum

# n=int(input())
# l=[True for i in range(n+1)]
# c=2
# mat=[]
# while(c*c<=n):
#     for i in range(2*c,n+1,c):
#         l[i]=False
#     c+=1
# for j in range(2,n+1):
#     if (l[j]==True):
#         mat.append(j)
# count=0
# su=2
# for i in range(1,len(mat)):
#     su+=mat[i]
#     if su in mat:
#         count+=1
    
# print(count)

# Dictionary

# fact = [1]
# for i in range(1, 21):
#     fact.append(i * fact[i-1])

# s = input()
# n = len(s)

# alpha = [0 for i in range(26)]

# for x in s:
#     alpha[ord(x) - ord('a')] += 1


# res = 0
# for i in range(n):
#     for j in range(ord(s[i]) - ord('a')):

#         if(alpha[j] == 0): continue

#         rep = 1

#         alpha[j] -= 1

#         for k in range(26):
#             if(alpha[k] > 0):
#                 rep *= alpha[k]

#         res += (fact[n - (i+1)] // rep)

#         alpha[j] += 1

#     alpha[ord(s[i]) - ord('a')] -= 1

# print(res + 1)

# Sorting Boxes

# n,k=map(int,input().split())
# l=list(map(int,input().split()))
# mn=min(l)
# l1=l.copy()
# l2=l.copy()
# l2.sort()
# l1.sort()
# l1.insert(k-1,l1[-1])
# l1.pop(-1)
# ans=0
# for i in range(n-1,0,-1):
#     mn_ind=l.index(mn)
#     x=l2[i]
#     ind1=l.index(x)
#     ind2=l1.index(x)
#     if ind1==ind2:continue
#     cost1=l[ind1]*l[ind2]
#     cost2=l[ind2]*mn+mn*l[ind1]
#     if cost1<cost2:
#         l[ind1],l[ind2]=l[ind2],l[ind1]
#         ans+=cost1
#     else:
#         l[ind2],l[mn_ind]=l[mn_ind],l[ind2]
#         l[ind2],l[ind1]=l[ind1],l[ind2]
#         ans+=cost2
# print(ans)
    


# Concatenating primes

# from math import sqrt
# def isprime(n):
#     if(n == 1): return False
#     if(n == 2): return True
#     if(n%2 == 0): return False
#     for i in range(3,int(sqrt(n)+1),2):
#         if n%i==0:return False
#     return True
# prime=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67]
# n,i=int(input()),0
# s=set()
# while(i<19 and prime[i]<=n):
#     j=0
#     while(j<19 and prime[j]<=n):
#         if isprime(int(str(prime[i])+str(prime[j]))):
#             s.add(int(str(prime[i])+str(prime[j])))
#         j+=1
#     i+=1
# print(len(s))


# Hermoine Number

# def powMod(x, y, m):
#     res = 1

#     x = x % m
#     while(y > 0):
#         if(y&1):
#             res = (res * x) % m
        
#         y = y >> 1
#         x = (x * x) % m

#     return res

# MOD = 1000000007

# fact = [1 for i in range(100001)]
# for i in range(1, 100001):
#     fact[i] = (fact[i-1] * i) % MOD

# n = int(input())
# ar = [0] + list(map(int, input().split()))

# pre = [1 for i in range(n+1)]
# for i in range(1, n+1):
#     pre[i] = (pre[i-1] * fact[ar[i]]) % MOD

# q = int(input())

# for _ in range(q):
#     l, r = map(int, input().split())

#     binv = powMod(pre[l-1], MOD-2, MOD)

#     prod = (pre[r] * binv) % MOD

#     print(powMod(prod, r-l, MOD))


# Exchange Digits

#     #include<bits/stdc++.h>
# using namespace std;
# typedef long long int ll;

# int main()
# {
#     ll n, m, i, ans = 1000000001;
#     string s;

#     cin>>s>>m;

#     n = s.length();

#     sort(s.begin(), s.end());

#     do
#     {
#         ll cur = 0;

#         for(i=0 ; i<n ; ++i)
#             cur = cur * 10 + (s[i] - '0');
        
#         if(cur > m)
#             ans = min(ans, cur);
        
#     } while (next_permutation(s.begin(), s.end()));
    
#     if(ans < 1000000001)
#         cout<<ans;
#     else
#         cout<<"-1";
    
#     return 0;
# }


# Math Frog

# n = int(input())

# row = [list() for i in range(n)]
# col = [list() for i in range(n)]
# g = [list() for i in range(n*n)]

# for i in range(n):
#     ar = list(map(int, input().split(',')))
#     for j in range(n):
#         if(ar[j] == 0): continue
        
#         row[i].append(j);
#         col[j].append(i);

# for k in range(n):
#     rln = len(row[k])
#     for i in range(rln):
#         if(i > 0):
#             x = k*n + row[k][i-1]
#             y = k*n + row[k][i]
#             g[y].append(x)
        
#         if(i < rln-1):
#             x = k*n + row[k][i]
#             y = k*n + row[k][i+1]
#             g[x].append(y)

#     cln = len(col[k])
#     for i in range(cln):
#         if(i > 0):
#             x = col[k][i-1]*n + k
#             y = col[k][i]*n + k
#             g[y].append(x)
        
#         if(i < cln-1):
#             x = col[k][i]*n + k
#             y = col[k][i+1]*n + k
#             g[x].append(y)

# x, y = map(int, input().split(','))
# src = (x-1)*n + (y-1)

# x, y = map(int, input().split(','))
# dst = (x-1)*n + (y-1)

# q = []
# qln = 0
# visited = [False for i in range(n*n)]
# distance = [n*n for i in range(n*n)]

# q.append(src)
# qln += 1
# visited[src] = True
# distance[src] = 0

# while (qln > 0):
#     cur = q.pop(0)
#     qln -= 1

#     if(cur == dst): break

#     for adj in g[cur]:
#         if(not visited[adj]):
#             q.append(adj)
#             qln += 1
#             visited[adj] = True
#             distance[adj] = distance[cur] + 1

# print(distance[dst])


# Predatory Pricing

# import math

# a, b = map(int, input().split())

# if(b > a):
#     a, b = b, a

# cnt = 0
# while(b != 0):
#     cnt += math.ceil(a/b)
#     t = a % b
#     a = b
#     b = t

# print(cnt-1)


# ATM machine

# notes=0;
# n=int(input())
# withdraw=int(input())
# hundred=int(input())
# twohund=int(input())
# fivehund=int(input())
# thousand=int(input())

# for i in range(hundred+1):
#     sum100=i*100
#     if((sum100==withdraw) and (i<=n) and (i>notes)):
#         notes=i
#     if(sum100<withdraw):
#         for j in range(twohund+1):
#             sum200=sum100+j*200
#             if((sum200==withdraw) and ((i+j)<=n) and ((j+i)>notes)):
#                 notes=j+i
#             if(sum200<withdraw):
#                 for k in range(fivehund+1):
#                     sum500=sum200+k*500
#                     if((sum500==withdraw) and ((i+j+k)<=n) and ((i+j+k)>notes)):
#                         notes=i+j+k
#                     if(sum500<withdraw):
#                         for l in range(thousand+1):
#                             sum1000=sum500+l*1000
#                             if((sum1000==withdraw) and ((i+j+k+l)<=n) and ((i+j+k+l)>notes)):
#                                 notes=i+j+k+l
#                             if(sum1000>withdraw):
#                                 l=thousand+1
                                    
# print(notes)

# Predatory Pricing V2.0

# def gcd(a, b):
#     if(b == 0):
#         return a
#     return gcd(b, a%b)

# a, b = map(int, input().split())
# print(gcd(a, b))

# Search Engine

# fact = [1]
# for i in range(1, 21):
#     fact.append(i * fact[i-1])

# s = input()
# pos = int(input())

# n = len(s)

# alpha = [0 for i in range(26)]

# for x in s:
#     alpha[ord(x) - ord('a')] += 1


# ans = ''
# res = 0
# ln = 0
# while(res<pos and ln<n):
#     for i in range(26):
        
#         if(alpha[i] == 0): continue

#         rep = 1

#         alpha[i] -= 1

#         for k in range(26):
#             if(alpha[k] > 0):
#                 rep *= alpha[k]

#         alpha[i] += 1

#         tmp = fact[n - (ln+1)] // rep

#         if(res+tmp >= pos):
#             ans += chr(ord('a') + i)
#             alpha[i] -= 1
#             break

#         res += tmp
#     ln += 1

# print(ans)

Board Game - Riot Of Pawns

n, p = map(int, input().split())

diag = [0 for i in range(2*n-1)]
rdiag = [0 for i in range(2*n-1)]

for _ in range(p):
    x, y = map(int, input().split())

    diag[x+y] += 1
    rdiag[x-y+n-1] += 1

ans = 0
for i in range(2*n-1):
    ans += (diag[i] * (diag[i]-1)) // 2
    ans += (rdiag[i] * (rdiag[i]-1)) // 2

print(ans)

Spiral Primes

n = 10**6

primes = []
prime = [True for i in range(n+1)]

prime[0] = prime[1] = False
p = 2
while(p*p <= n):
    if(prime[p]):
        for i in range(p*p, n+1, p):
            prime[i] = False
    p += 1

for p in range(2, n+1):
    if(prime[p]):
        primes.append(p)

m = dict()

m[(0, 0)] = 2

tot = len(primes)
cur = 1
side = 1
x, y = 0, 0

i = 1
while(i < tot):
    for j in range(i, min(i+side, tot)):
        if(cur%4 == 1):   x += 1
        elif(cur%4 == 2): y += 1
        elif(cur%4 == 3): x -= 1
        else:             y -= 1

        m[(x, y)] = primes[j]

    i = min(i+side, tot)

    cur += 1
    if(cur&1):
        side += 1
    
t = int(input())

for _ in range(t):
    x, y = map(int, input().split())

    print(m[(x, y)])

Sherlock - Lost City

for _ in range(int(input())):
    n=int(input())
    l=[True for i in range(n+1)]
    c=2
    while(c*c<=n):
        for i in range(2*c,n+1,c):
            l[i]=False
        c+=1
    for j in range(2,n+1):
        if (l[j]==True):
            print(j,end=" ")
    print()


History Class

n = int(input())

ar = [[0 for j in range(n)] for i in range(n)]
num = 1
for l in range(n//2):
    x = n - 2*l - 1

    for j in range(l, l+x):
        ar[l][j] = num
        num += 1

    for i in range(l, l+x):
        ar[i][l+x] = num
        num += 1

    for j in range(l+x, l, -1):
        ar[l+x][j] = num
        num += 1

    for i in range(l+x, l, -1):
        ar[i][l] = num
        num += 1

if(n%2 == 1):
    ar[n//2][n//2] = num

for x in ar:
    print(*x)


a=[]
b=[]
lar_b=0
sum=0
lar_b_index=0

n, k = (map(int, input ().strip ().split (' ')))
a = (list (map (int, input ().strip ().split (' '))))
b = (list (map (int, input ().strip ().split (' '))))

print('n=',n,'k=',k,'a=',a,'b=',b)

for i in range(0, len(b),1):
    if(abs(b[i])>lar_b):
        lar_b=abs(b[i])
        lar_b_index=i

if(b[lar_b_index]>0):
    temp_a=a[lar_b_index]
    a[lar_b_index]=a[lar_b_index]+(-2*k)
else:
    temp_a=a[lar_b_index]
    a[lar_b_index]=a[lar_b_index]+(2*k)

for i in range(0,n,1):
    sum+=(a[i]*b[i])

print('Min_product_array=',sum)


# def fn():
#     s = input().strip()
#     count = 0

#     for i in s:
#         if i != '6':
#             count += 1
#     # if(s[len(s)-1] == '6'):
#     #     count = -1

#     print(count)

# fn()


def fn():
    n,m = map(int,input().strip().split())
    a = []
    for _ in range(n):
        a.append(list(map(int,input().strip().split())))
    sumi = 0

    #print(a)
    for i in a:
        for j in i:
            sumi += (j**2)

    ans = round((sumi**(1/2)),2)
    print(ans)
fn()

# def minRot(arr):
#     if not arr: return -1
#     n = len(arr[0])
#     cnt = {(arr[0][i:] + arr[0][:i]) : i for i in range(n)}
#     for s in arr[1:]:
#         if len(s) != n: return -1
#         for i in range(n):
#             cur = s[i:] + s[:i]
#             if cur not in cnt: return -1
#             cnt[cur] += i
#     return cnt[min(cnt, key = lambda x: cnt[x])]

# arr = []

# for _ in range(int(input().strip())):
#     arr.append(input().strip())

# print(minRot(arr))
