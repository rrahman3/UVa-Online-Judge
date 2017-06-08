#include<stdio.h>
int main ()
{
    long long int fact[6],f=1,i,n;
    for(i=2;i<=13;i++)
    {
        f=f*i;
        if(i>=8)
            fact[i-8]=f;
    }
    while ( scanf("%lld",&n) == 1)
    {
        if (n<0)
        {
            n=-n;
            if(n%2==0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");
        }
        else if(n<8)
            printf("Underflow!\n");
        else if (n>13)
            printf("Overflow!\n");
        else
            printf("%lld\n",fact[n-8]);
    }
    return 0;
}

