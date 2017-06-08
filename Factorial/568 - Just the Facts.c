#include<stdio.h>
#define size 10
#define max 10001
int main ()
{
    long long int num = 1, last_digit[max], i, j, k, temp , c=0 , d ;
    last_digit[0]=1;
    last_digit[1]=1;
    for( k = 2 ; k < max ; k++ )
    {
        num = num * k;
        for( i = 0 ; ; i++ )
        {
            if(num % 10 != 0)
            {
                last_digit[k]= num % 10;
                break;
            }
            num = num / 10;
        }
        num = num % 100000000000 ;
    }
    long long int N;
    while(scanf("%lld",&N)==1)
        printf("%5lld -> %lld\n",N,last_digit[N]);
    return 0;
}
