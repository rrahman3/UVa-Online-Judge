#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 2569
#define max 101
int main ()
{
    char fact[max][size];
    fact[0][0]='1';
    int num[size], ans[size], i, j, k, temp , c=0 , d ;
    for(i=0;i<size;i++)
    {
        num[i] = 0;
        ans[i] = 0;
    }
    num[size-1] = 1;
    ans[size-1] = 1;
    for( k = 2 ; k <= 1000 ; k++ )
    {
        for( i = size - 1 ; i >= 0 ; i-- )
        {
            d = num[i] * k + c;
            c = 0;
            if( d >= 10 && d < 100)
            {
                c = d / 10;
                d = d % 10;
            }
            else if( d >= 100 && d < 1000)
            {
                c = d / 10;
                d = d % 100 - ( c % 10 ) * 10;
            }
            else if( d >= 1000 && d < 10000)
            {
                c = d / 10;
                d = d % 1000 - ( c % 100 ) * 10;
            }
            ans[i] = d;
        }
        while ( c != 0 )
            ans[i] = c % 10;
        for( i = 0 ; i < size ; i++ )
            num[i] = ans[i];
        for( i = 0 ; ; i++ )
            if( ans[i] != 0 )
                break;
        if(k%10==0)
        {
            for( j=0 ; i < size ; i++ , j++ )
                fact[k/10][j]=ans[i]+48;
            fact[k/10][j]='\0';
        }
    }
    int N,len;
    while(scanf("%d",&N)==1)
    {
        j=N/10;
        if(j*10==N)
            printf("%d!\n%s\n",N,fact[j]);
        else
        {
            for(i=0;i<size;i++)
            {
                num[i]=0;
                ans[i]=0;
            }
            len=strlen(fact[j]);
            printf("length = %d\n",len);
            for(k=size-1,i=len-1;i>=0;i--,k--)
                num[k] = fact[j][i] - 48;
            for( k = j*10+1 ; k <= N ; k++ )
            {
                c=0;
                for( i = size - 1 ; i >= 0 ; i-- )
                {
                    d = num[i] * k + c;
                    c = 0;
                    if( d >= 10 && d < 100)
                    {
                        c = d / 10;
                        d = d % 10;
                    }
                    else if( d >= 100 && d < 1000)
                    {
                        c = d / 10;
                        d = d % 100 - ( c % 10 ) * 10;
                    }
                    else if( d >= 1000 && d < 10000)
                    {
                        c = d / 10;
                        d = d % 1000 - ( c % 100 ) * 10;
                    }
                    ans[i] = d;
                }
                while ( c != 0 )
                    ans[i] = c % 10;
                for( i = 0 ; i < size ; i++ )
                    num[i] = ans[i];
            }
            for( i = 0 ; ; i++ )
                if( ans[i] != 0 )
                    break;
            printf("%d!\n",N);
            for( j=i ; j < size ; j++ )
                printf("%d",ans[j]);
            printf("\n");
        }
    }
    return 0;
}
