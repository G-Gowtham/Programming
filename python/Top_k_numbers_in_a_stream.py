import heapq

def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    d = {}
    print()
    for i in range(n):
        d[a[i]] = a[:i+1].count(a[i])
        x = list(d.items())
        #print(x)
        x.sort()
        x.sort(key = lambda l : l[1], reverse = True)
        count = 0

        

        for i in range(len(x)):
            if(count<k):
                print(x[i][0],end = ' ')
            else:
                break
            count += 1       

    #print(d)

for _ in range(int(input().strip())):
    fn()

#78 16 78 16 78 94 16 36 78 94 16 36 78 87 94 16 36 78 87 93 94 16 36 50 78 87 93 94 16 22 36 50 78 87 93 94 16 22 36 50 63 78 87 93 94 16 22 28 36 50 63 78 87 93 94 16 22 28 36 50 63 78 87 91 93 94 16 22 28 36 50 60 63 78 87 91 93 94 16 22 28 36 50 60 63 64 78 87 91 93 94 16 22 27 28 36 50 60 63 64 78 87 91 93 94 16 22 27 28 36 41 50 60 63 64 78 87 91 93 94 27 16 22 28 36 41 50 60 63 64 78 87 91 93 94 27 16 22 28 36 41 50 60 63 64 73 78 87 91 93 94 27 16 22 28 36 37 41 50 60 63 64 73 78 87 91 93 94 27 12 16 22 28 36 37 41 50 60 63 64 73 78 87 91 93 94 27 12 16 22 28 36 37 41 50 60 63 64 69 73 78 87 91 93 94 27 12 16 22 28 36 37 41 50 60 63 64 68 69 73 78 87 91 93 94 27 12 16 22 28 30 36 37 41 50 60 63 64 68 69 73 78 87 91 93 94 27 12 16 22 28 30 36 37 41 50 60 63 64 68 69 73 78 83 87 91 93 94 27 12 16 22 28 30 31 36 37 41 50 60 63 64 68 69 73 78 83 87 91 93 94 27 63 12 16 22 28 30 31 36 37 41 50 60 64 68 69 73 78 83 87 91 93 94 27 63 12 16 22 24 28 30 31 36 37 41 50 60 64 68 69 73 78 83 87 91 93 94 27 63 68 12 16 22 24 28 30 31 36 37 41 50 60 64 69 73 78 83 87 91 93 94 27 36 63 68 12 16 22 24 28 30 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 12 16 22 24 28 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 24 28 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 23 24 28 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 70 73 78 83 87 91 93 94 68 27 30 36 63 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 70 73 78 83 87 91 93 94 68 27 30 36 63 94 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 70 73 78 83 87 91 93 68 27 30 36 63 94 3 12 16 22 23 24 28 31 37 41 50 57 59 60 64 69 70 73 78 83 87 91 93 68 12 27 30 36 63 94 3 16 22 23 24 28 31 37 41 50 57 59 60 64 69 70 73 78 83 87 91 93 68 12 27 30 36 63 94 3 16 22 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 78 83 87 91 93 30 68 12 27 36 63 94 3 16 22 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 78 83 87 91 93 30 68 12 27 36 63 94 3 16 22 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 87 91 93 30 68 12 22 27 36 63 94 3 16 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 99 30 68 12 22 27 36 63 94 3 16 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 99 30 68 12 16 22 27 36 63 94 3 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 99 30 68 12 16 22 27 36 63 94 3 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 93 99 30 68 12 16 22 27 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 93 99 27 30 68 12 16 22 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 93 99 27 30 68 12 16 22 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 92 93 99 27 30 68 12 16 22 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 81 83 85 87 91 92 93 99 27 30 68 12 16 22 36 57 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 71 73 74 78 81 83 85 87 91 92 93 99 27 30 68 12 16 22 36 57 63 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 71 73 78 81 83 85 87 91 92 93 99 27 30 63 68 12 16 22 36 57 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 71 73 78 81 83 85 87 91 92 93 99 27 30 63 68 12 16 22 36 57 71 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 83 85 87 91 92 93 99 27 30 63 68 12 16 22 36 57 71 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 94 3 6 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 94 3 6 14 20 23 24 25 26 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 85 94 3 6 14 20 23 24 25 26 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 12 16 22 28 36 57 71 74 85 94 3 6 14 20 23 24 25 26 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 12 16 22 28 36 37 57 71 74 85 94 3 6 14 20 23 24 25 26 31 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 6 12 16 22 28 36 37 57 71 74 85 94 3 14 20 23 24 25 26 31 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 6 12 16 22 28 36 37 57 71 74 85 94 3 14 20 23 24 25 26 31 38 41 43 47 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 16 22 28 36 37 57 71 74 85 94 3 14 20 23 24 25 26 31 38 41 43 47 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 28 36 37 57 71 74 85 94 3 20 23 24 25 26 31 38 41 43 47 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 28 36 37 57 71 74 85 94 3 20 23 24 25 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 85 94 3 20 23 24 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 85 94 3 20 23 24 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 83 87 91 92 93 96 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 20 23 24 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 20 23 24 26 31 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 97 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 46 47 50 58 59 60 64 65 69 70 73 78 81 82 87 91 92 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 44 46 47 50 58 59 60 64 65 69 70 73 78 81 82 87 91 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 78 81 82 87 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 78 81 82 87 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 78 81 82 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 81 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 79 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 79 30 68 27 63 85 6 12 14 16 22 25 28 36 37 57 71 74 83 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 79 
#
#78 16 78 16 78 94 16 36 78 94 16 36 78 87 94 16 36 78 87 93 94 16 36 50 78 87 93 94 16 22 36 50 78 87 93 94 16 22 36 50 63 78 87 93 94 16 22 28 36 50 63 78 87 93 94 16 22 28 36 50 63 78 87 91 93 94 16 22 28 36 50 60 63 78 87 91 93 94 16 22 28 36 50 60 63 64 78 87 91 93 94 16 22 27 28 36 50 60 63 64 78 87 91 93 94 16 22 27 28 36 41 50 60 63 64 78 87 91 93 94 27 16 22 28 36 41 50 60 63 64 78 87 91 93 94 27 16 22 28 36 41 50 60 63 64 73 78 87 91 93 94 27 16 22 28 36 37 41 50 60 63 64 73 78 87 91 93 94 27 12 16 22 28 36 37 41 50 60 63 64 73 78 87 91 93 94 27 12 16 22 28 36 37 41 50 60 63 64 69 73 78 87 91 93 94 27 12 16 22 28 36 37 41 50 60 63 64 68 69 73 78 87 91 93 94 27 12 16 22 28 30 36 37 41 50 60 63 64 68 69 73 78 87 91 93 94 27 12 16 22 28 30 36 37 41 50 60 63 64 68 69 73 78 83 87 91 93 94 27 12 16 22 28 30 31 36 37 41 50 60 63 64 68 69 73 78 83 87 91 93 94 27 63 12 16 22 28 30 31 36 37 41 50 60 64 68 69 73 78 83 87 91 93 94 27 63 12 16 22 24 28 30 31 36 37 41 50 60 64 68 69 73 78 83 87 91 93 94 27 63 68 12 16 22 24 28 30 31 36 37 41 50 60 64 69 73 78 83 87 91 93 94 27 36 63 68 12 16 22 24 28 30 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 12 16 22 24 28 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 24 28 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 23 24 28 31 37 41 50 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 73 78 83 87 91 93 94 27 30 36 63 68 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 70 73 78 83 87 91 93 94 68 27 30 36 63 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 70 73 78 83 87 91 93 94 68 27 30 36 63 94 3 12 16 22 23 24 28 31 37 41 50 59 60 64 69 70 73 78 83 87 91 93 68 27 30 36 63 94 3 12 16 22 23 24 28 31 37 41 50 57 59 60 64 69 70 73 78 83 87 91 93 68 12 27 30 36 63 94 3 16 22 23 24 28 31 37 41 50 57 59 60 64 69 70 73 78 83 87 91 93 68 12 27 30 36 63 94 3 16 22 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 78 83 87 91 93 30 68 12 27 36 63 94 3 16 22 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 78 83 87 91 93 30 68 12 27 36 63 94 3 16 22 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 87 91 93 30 68 12 22 27 36 63 94 3 16 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 30 68 12 22 27 36 63 94 3 16 20 23 24 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 99 30 68 12 22 27 36 63 94 3 16 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 99 30 68 12 16 22 27 36 63 94 3 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 73 74 78 83 85 87 91 93 99 30 68 12 16 22 27 36 63 94 3 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 93 99 30 68 12 16 22 27 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 93 99 27 30 68 12 16 22 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 93 99 27 30 68 12 16 22 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 83 85 87 91 92 93 99 27 30 68 12 16 22 36 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 57 59 60 64 69 70 71 73 74 78 81 83 85 87 91 92 93 99 27 30 68 12 16 22 36 57 63 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 71 73 74 78 81 83 85 87 91 92 93 99 27 30 68 12 16 22 36 57 63 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 71 73 78 81 83 85 87 91 92 93 99 27 30 63 68 12 16 22 36 57 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 71 73 78 81 83 85 87 91 92 93 99 27 30 63 68 12 16 22 36 57 71 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 83 85 87 91 92 93 99 27 30 63 68 12 16 22 36 57 71 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 94 3 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 94 3 6 14 20 23 24 25 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 94 3 6 14 20 23 24 25 26 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 85 87 91 92 93 97 99 27 30 63 68 12 16 22 36 57 71 74 85 94 3 6 14 20 23 24 25 26 28 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 12 16 22 28 36 57 71 74 85 94 3 6 14 20 23 24 25 26 31 37 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 12 16 22 28 36 37 57 71 74 85 94 3 6 14 20 23 24 25 26 31 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 6 12 16 22 28 36 37 57 71 74 85 94 3 14 20 23 24 25 26 31 38 41 43 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 27 30 63 68 6 12 16 22 28 36 37 57 71 74 85 94 3 14 20 23 24 25 26 31 38 41 43 47 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 16 22 28 36 37 57 71 74 85 94 3 14 20 23 24 25 26 31 38 41 43 47 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 28 36 37 57 71 74 85 94 3 20 23 24 25 26 31 38 41 43 47 50 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 28 36 37 57 71 74 85 94 3 20 23 24 25 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 85 94 3 20 23 24 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 83 87 91 92 93 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 85 94 3 20 23 24 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 83 87 91 92 93 96 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 20 23 24 26 31 38 41 43 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 97 99 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 20 23 24 26 31 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 97 30 27 63 68 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 96 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 46 47 50 58 59 60 64 69 70 73 78 81 82 87 91 92 93 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 46 47 50 58 59 60 64 65 69 70 73 78 81 82 87 91 92 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 44 46 47 50 58 59 60 64 65 69 70 73 78 81 82 87 91 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 78 81 82 87 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 78 81 82 87 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 78 81 82 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 81 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 79 30 68 27 63 6 12 14 16 22 25 28 36 37 57 71 74 83 85 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 79 30 68 27 63 85 6 12 14 16 22 25 28 36 37 57 71 74 83 94 3 9 15 20 23 24 26 31 35 38 41 43 44 46 47 50 51 58 59 60 64 65 69 70 73 77 78 79 