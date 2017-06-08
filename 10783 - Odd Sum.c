#include<stdio.h>
int main ()
{
    int i,T;
    scanf("%d",&T);
    if(T>=1 && T<=100)
    {
        for (i=1;i<=T;i++)
        {
            int a,b,sum=0,j;
            scanf("%d %d",&a,&b);
            if (a>=0 && a<=100 && b>=0 && b<=100)
            {
                for(j=a;j<=b;j++)
                {
                    if(j%2!=0)
                    {
                        sum=sum+j;
                    }
                }
            }
            printf("Case %d: %d\n",i,sum);
        }
    }
    return 0;
}
