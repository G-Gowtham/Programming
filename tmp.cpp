#include<stdio.h>
#include<stdlib.h>
typedef unsigned long long ulong;
ulong gcd(int a,int b){
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
ulong lcm(ulong a,ulong b){
    return (a*b)/gcd(a,b);
}
ulong monkeys(ulong n){
    int i;
    ulong* ar = (ulong*)malloc((n+1)*sizeof(ulong));
    for(i=1;i<=n;i++)
        scanf("%llu",&ar[i]);
    int res=1,loop_length,tid;
    for(i=1;i<=n;i++){
        loop_length=0;
        while(ar[i]!=0){
            loop_length++;
            tid = ar[i];       // tid = i
            ar[i]=0;           //i = ar[i]
            i =tid;            //ar[tid]=0
        }
        if(loop_length!=0){
            res = lcm(res,loop_length);
        }
    }
    free(ar);
    return res;
}
int main(){
    ulong t,n,res;
    scanf("%llu",&t);
    while(t--){
        scanf("%llu",&n);
        res = monkeys(n);
        printf("%llu\n",res);
    }
    return 0;
}