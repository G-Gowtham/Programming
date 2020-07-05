#User function Template for python3
'''
Function Arguments :
		@param  : s(given string), n (size of string)
		@return : None, print the sorted string
'''

def countingSort(s,n):
    a = [0]*26
    s1 = [0]*n
    for i in range(n):
        a[ord(s[i])-97] += 1

    index = 0
    for i in range(1,26):
        a[i] = a[i-1]+a[i]

    #print(a)

    for i in range(n):
        s1[a[ord(s[i])-97]-1] = s[i]
        a[ord(s[i])-97] -= 1 
    
    print(*s1)

for _ in range(int(input().strip())):
    n = int(input().strip())
    s = input().strip()
    countingSort(s,n)


