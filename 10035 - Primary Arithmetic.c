#include<stdio.h>
int main ()
{
    long long int n1,n2;
    while(scanf("%lld %lld",&n1,&n2)==2 )
    {
        if( n1==0 && n2==0)
            break;
        long long int carry = 0 , p = 10 , i;
        for ( i = 0 ; i < 18 ; i++)
        {
            carry += ( ( n1 % p ) + ( n2 % p ) ) / p;
            p = 10 * p;
        }
        if ( carry == 0 )
            printf("No carry operation.\n");
        else if ( carry == 1 )
            printf("%lld carry operation.\n",carry);
        else
            printf("%lld carry operations.\n",carry);
    }
    return 0;
}
