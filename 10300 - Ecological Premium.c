#include<stdio.h>
int main()
{
    unsigned int sum,T,i,j;
    scanf("%d",&T);
    for (i=1;i<=T;i++){
        int farmers_no;
        scanf("%d",&farmers_no);
        sum=0;
        for (j=1;j<=farmers_no;j++){
            unsigned int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            sum=sum+a*c;
        }
        printf("%d\n",sum);
    }
    return 0;
}
