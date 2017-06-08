#include<stdio.h>
int main ()
{
    unsigned long int i,j,n,a,max;
    while(scanf("%lu%lu",&i,&j)==2){
        n=i;
        max=1;
        while(n<=j){
            for(a=1;n>1;a++){
                if (n%2==0){
                    n=n/2;
                }
                else{
                    n=3*n+1;
                }
            }
            if(a>max){
                max=a;
            }
            n++;
        }
        printf("%lu %lu %lu\n",i,j,max);
    }
    return 0;
}
