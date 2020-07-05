#include<stdio.h>
#include<math.h>
int numberOfDigits(int num)
{
    int nod=0;
    while(num!=0)
    {
        num=num/10;
        nod++;
    }
    return nod;
}

int powerOf(int expo)
{

    int powerCtr, power;
    for(powerCtr =1, power = 1; powerCtr <= expo; powerCtr++)
          power = power * 10;

    return power;
}
#include<limits.h>
#define PRIME 1
#define NOT_PRIME 0
int isPrime(int num);
#define UNIQUE 1
#define DUPLICATE 0
int isUniq(int arr[], int size, int searchVal);
int main()
{

int n1,n2,num,checkFactor, until, printIndex, fiboCtr;
scanf("%d %d",&n1,&n2);
int primeSize;
primeSize = (n2 - n1) /2;
int primesArr[primeSize], primesArrInd=0;
num = n1;
while(num<=n2)
{
    // prime checking
    // 2 to sqrt(num)
    until = sqrt(num);
    for(checkFactor=2;checkFactor <= until;checkFactor++)
    {
        if(num % checkFactor == 0)
            break;
    }
    if(checkFactor > until)
    {
        primesArr[primesArrInd] = num;
        primesArrInd++;
    }

   //  printf("%d ", num);
     num =     num + 1;
}

int maxCombi, outerInd, innerInd, combiVal, nod , power;
int smallest = INT_MAX, largest = INT_MIN;
maxCombi = primesArrInd * (primesArrInd - 1);
int combi[maxCombi], combiInd=0;
//printf("%d", maxCombi);
for(outerInd = 0; outerInd < primesArrInd ; outerInd++)
{
        for(innerInd = 0; innerInd < primesArrInd; innerInd++)
        {
              if(outerInd==innerInd) continue;
             // printf(" %d%d  ", primesArr[outerInd], primesArr[innerInd]);
             nod = numberOfDigits(primesArr[innerInd]);
             power = powerOf(nod);

             combiVal= primesArr[outerInd] * power  + primesArr[innerInd];
             if(isPrime(combiVal) == PRIME && isUniq(combi,   combiInd    ,combiVal))
             {
                 combi[combiInd++] =combiVal;
                 if(combiVal < smallest)
                    smallest = combiVal;
                 if(combiVal > largest)
                    largest = combiVal;
             }

        }
}


 long long  term1, term2, term3;
 term1= smallest;
 term2 = largest;
 term3 = term1 + term2;
 for(fiboCtr=3; fiboCtr < combiInd; fiboCtr++)
 {
     term1 = term2;
     term2 =term3;
      term3 = term1 + term2;

 }

 printf("%lld", term3);

return 0;
}

int isUniq(int arr[], int size, int searchVal)
{
    int arrInd;
    for(arrInd = 0; arrInd < size; arrInd++)
             if(arr[arrInd ]  == searchVal) return DUPLICATE;

    return UNIQUE;
}
int isPrime(int num)
{
    int until, checkFactor;
    if(num == 2 || num == 3 || num == 5) return PRIME;
    if(num <= 1 || num % 2 == 0) return NOT_PRIME;
    until = sqrt( num);
     for(checkFactor = 3; checkFactor <= until;  checkFactor+=2)
             if(num % checkFactor == 0) return NOT_PRIME;

             return PRIME;

}