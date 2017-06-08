#include<stdio.h>
long long int cycle_length(long long int n)
{
    long long int i;
    for(i=1;n>1;i++){
        if (n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
    }
    return i;
}
int main ()
{
    long long int n1,n2,i,j,max;
    while(scanf("%lld %lld",&n1,&n2)==2){
        j=n1;
        max=1;
        while(j<=n2){
            i=cycle_length(j);
            if(i>max){
                max=i;
            }
            j++;
        }
        printf("%lld %lld %lld\n",n1,n2,max);
    }
    return 0;
}
