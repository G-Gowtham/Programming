def ones(x):
    one = ['zero','one','two','three','four','five','six','seven','eight','nine']
    if(x>0):
        return one[x];
    return ''

def specials(x):
    special = ["ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"]
    return special[x]

def tens(x):
    ten = ["zero","ten","twenty","thirty","forty","fifty","sixty", "seventy", "eighty", "ninety"]
    if(x>0):
        return ten[x]
    return ''


def fn(n):
    orginal = n 
    words = ""
    count = 0
    while(n):
        x = n % 10
        count += 1
        n = n//10

        if count == 1 and n % 10 != 1:
            words = ones(x) + words
        if count == 2:
            if 9 < (orginal % 100) < 20 :
                words = specials(orginal % 10) + words
            elif tens(x) != "":
                words = tens(x) + " " + words
        if count == 3:
            if words == "" and x != 0:
                words = ones(x) + " hundred "
            elif ones(x) != "":
                words = ones(x) + " hundred and " + words
        if count == 4:
            if words == "":
                words = ones(x) + " thousand "
            elif str(orginal)[2] != '0':
                words = ones(x) + " thousand " + words
            else:
                words = ones(x) + " thousand and " + words
    print(words)

for _ in range(int(input().strip())):
    n = int(input().strip())
    fn(n)