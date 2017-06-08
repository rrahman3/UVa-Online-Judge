#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 782
#define max 367
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
    for( k = 2 ; k <= 366 ; k++ )
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
    int N;
    while(scanf("%d",&N)==1)
    {
        printf("%d! --\n",N);
        for(i=0;i<=1;i++)
        {
            printf("   ");
            for(j=5*i;j<5*(i+1);j++)
            {
                printf("(%d)    %d",j,count[N][j]);
                if(j!=5*(i+1)-1)
                    printf("    ");
            }
            printf("\n");
        }
    }
    return 0;
}
