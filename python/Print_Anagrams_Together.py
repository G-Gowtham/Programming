#User function Template for python3

def Anagrams(words,n):

    altered = []

    for i in range(len(words)):
        altered.append(["".join(sorted(words[i])),i])
    
    altered.sort()

    ans = []
    i = 0

    while i<n:
        tmp = []
        tmp.append(words[altered[i][1]])
        
        while i+1 < n and altered[i][0] == altered[i+1][0]:
            tmp.append(words[altered[i+1][1]])
            i += 1

        ans.append(tmp)
        i+=1


    #print(ans)
    return ans


if __name__ =='__main__':
    t= int(input())
    for tcs in range(t):
        n= int(input())
        words=input().split()
        
        ans=Anagrams(words,n)
        
        for grp in sorted(ans):
            for word in grp:
                print(word,end=' ')
            print()

# } Driver Code Ends