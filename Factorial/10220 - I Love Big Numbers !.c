#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 2569
#define max 1001
int main ()
{
    int count[max][10];
    int num[size], ans[size], i, j, k, temp , c=0 , d ;
    for(i=0;i<max;i++)
        for(j=0;j<10;j++)
            count[i][j]=0;
    count[0][1]=1;
    count[1][1]=1;
    for(i=0;i<size;i++)
    {
        num[i] = 0;
        ans[i] = 0;
    }
    num[size-1] = 1;
    ans[size-1] = 1;
    for( k = 2 ; k < max ; k++ )
    {
        for( i = size - 1 ; i >= 0 ; i-- )
        {
            d = num[i] * k + c;
            c = d / 10;
            ans[i] = d % 10;
        }
        for( i = 0 ; i < size ; i++ )
            num[i] = ans[i];
        for( i = 0 ; ; i++ )
            if( ans[i] != 0 )
                break;
        for( j=0 ; i < size ; i++ , j++ )
            count[k][ans[i]]++;
    }
    int sum[max];
    sum[0]=1;
    sum[1]=1;
    for(i=2;i<max;i++)
        sum[i]=0;
    for(i=2;i<max;i++)
        for(j=1;j<10;j++)
            sum[i]+=count[i][j]*j;
    int N;
    while(scanf("%d",&N)==1)
        printf("%d\n",sum[N]);
    return 0;
}
