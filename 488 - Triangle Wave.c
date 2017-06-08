#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    int a[9]={1,22,333,4444,55555,666666,7777777,88888888,999999999},n[t],f[t],i,j,k;
    for ( i = 0 ; i < t ; i++)
        scanf("%d %d",&n[i],&f[i]);
    for ( i = 0 ; i < t ; i++)
        for(k=0;k<f[i];k++)
        {
            for(j=0;j<n[i];j++)
                printf("%d\n",a[j]);
            for(j=n[i]-2;j>=0;j--)
                printf("%d\n",a[j]);
            if(i==t-1 && k==f[t-1]-1)
                break;
            printf("\n");
        }
    return 0;
}
