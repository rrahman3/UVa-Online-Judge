#include<stdio.h>
int main ()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,i,j,k,count=0,sum=0;
        double avg,res;
        scanf("%d",&n);
        int a[n];
        for ( i = 0 ; i < n ; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=1.0*sum/n;
        for ( i = 0 ; i < n ; i++ )
        {
            if(a[i]>avg)
                count++;
        }
        res=100.0*count/n;
        printf("%.3lf%%\n",res);
    }
    return 0;
}
