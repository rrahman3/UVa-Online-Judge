#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 2569
#define max 101
int main ()
{
    char fact[max][size], res[size];
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
            c = d / 10;
            ans[i] = d % 10;
        }
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
            //printf("length = %d\n",len);
            for(k=size-1,i=len-1;i>=0;i--,k--)
                num[k] = fact[j][i] - 48;
            for( k = j*10+1 ; k <= N ; k++ )
            {
                for( i = size - 1 , c = 0 ; i >= 0 ; i-- )
                {
                    d = num[i] * k + c;
                    c = d / 10;
                    ans[i] = d % 10;
                }
                for( i = 0 ; i < size ; i++ )
                    num[i] = ans[i];
            }
            for( i = 0 ; ; i++ )
                if( ans[i] != 0 )
                    break;
            for( j=i,k=0 ; j < size ; j++,k++ )
                res[k] = ans[j] + 48;
            res[k]='\0';
            printf("%d!\n%s\n",N,res);
        }
    }
    return 0;
}
