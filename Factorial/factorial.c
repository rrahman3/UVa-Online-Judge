#include<stdio.h>
#define size 1135
int main ()
{
    int N;
    while(scanf("%d",&N)==1)
    {
        if(N==0) printf("The Factorial of 0 is 1\n");
        else
        {
            int num1[size], num2[size], ans[size], i, j, k, temp;
            for(i=0;i<size;i++)
            {
                num1[i] = 0;
                num2[i] = 0;
                ans[i]=0;
            }
            num1[size-1]=1;
            num2[size-1]=1;
            ans[size-1]=1;
            for(k=2;k<=N;k++)
            {
                for(j=1;j<k;j++)
                {
                    int c = 0 , d;
                    for(i=size-1;i>=0;i--)
                    {
                        d = num1[i]+num2[i]+c;
                        c = 0;
                        if( d > 9)
                        {
                            d = d - 10 ;
                            c = 1 ;
                        }
                        ans[i]=d;
                    }
                    for(i=0;i<size;i++)
                    {
                        num2[i]=ans[i];
                    }
                }
                for(i=0;i<size;i++)
                {
                    num1[i]=ans[i];
                    num2[i]=ans[i];
                }
            }
            for(i=0;;i++)
            if(ans[i]!=0)
                break;
            printf("The Factorial of %d is ",N);
            for(;i<size;i++)
                printf("%d",ans[i]);
            printf("\n");
        }
    }
    return 0;
}

