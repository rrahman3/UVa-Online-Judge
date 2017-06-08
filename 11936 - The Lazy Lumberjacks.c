#include<stdio.h>
int main ()
{
    int i,T;
    scanf("%d",&T);
    if (T>=2 && T<=20)
    {
        for(i=1;i<=T;i++)
        {
            unsigned long int a,b,c;
            scanf("%lu %lu %lu",&a,&b,&c);
            if (a+b<=c)
            {
                printf("Wrong!!\n");
            }
            else
            {
                printf("OK\n");
            }
        }
    }
    return 0;
}
