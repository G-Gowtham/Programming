
def convertRoman(n):
    thousands = ["", "M", "MM", "MMM", "MMMM"]
    hundreds = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"]
    tens = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
    ones = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]

    ans = ""

    ans += thousands[n // 1000]
    n = n%1000 
    ans += hundreds[n // 100]
    n = n%100
    ans += tens[n // 10]
    n = n%10
    ans += ones[n]

    return ans 



#{ 
#  Driver Code Starts
#Your Code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        print(convertRoman(n))
# Contributed by: Harshit Sidhwa
# } Driver Code Ends