#include<stdio.h>
int main ()
{
    long long int b,n,n1,n2,m,x,power,i,j,k;
    while ( scanf("%lld %lld %lld",&b,&n,&m) == 3)
    {
        n1=n;
        n2=n;
        for(k=0;n1!=0;k++)
            n1=n1/2;
        long long int a[k];
        for (i=0;i<k;i++)
        {
            a[i]=n%2;
            n=n/2;
        }
        x=1;
        power=b%m;
        for(i=0;i<k;i++)
        {
            if(a[i]==1)
            {
                x=(x*power)%m;
            }
            power=(power*power)%m;
        }
        printf("%lld\n",x);
    }
    return 0;
}
