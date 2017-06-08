#include<stdio.h>
int main ()
{
    int T,i;
    scanf("%d",&T);
    if(T<15){
        for(i=1;i<=T;i++){
            int a,b;
            scanf("%d %d",&a,&b);
            if(a<1000000001 && b<1000000001){
                if(a<b){
                    printf("<\n");
                }
                else if(a>b){
                    printf(">\n");
                }
                else if(a=b){
                    printf("=\n");
                }
            }
        }
    }
    return 0;
}
