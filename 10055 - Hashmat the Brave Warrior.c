#include<stdio.h>
int main()
{
    long int a,b,ans;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        ans=a-b;
        if(ans<0)
        {
            ans=ans*(-1);
        }
        printf("%ld\n",ans);
    }
    return 0;
}
