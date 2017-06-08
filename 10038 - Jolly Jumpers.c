#include<stdio.h>
int main ()
{
    long long  int n;
    while(scanf("%lld",&n)==1)
    {
        long long int a[n],b,i,check[n],ans=1;
        for ( i = 0 ; i < n ; i++)
            check[i] = 0;
        for ( i = 0 ; i < n ; i++ )
            scanf("%lld",&a[i]);
        for ( i = 1 ; i < n ; i++ )
        {
            if ( abs ( a[i-1] - a[i] ) >= n )
            {
                ans = 0;
                break;
            }
            check[ abs ( a[i-1] - a[i] ) ] = 1;
        }
        for ( i = 1 ; i <= n - 1 ; i++ )
        {
            if ( check[i] == 0 )
            {
                ans = 0;
                break;
            }
        }
        if(ans==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
