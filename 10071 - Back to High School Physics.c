#include<stdio.h>
int main ()
{
    int v,t;
    while(scanf("%d %d",&v,&t)==2){
        if (v>=-100 && v<=100 && t>=0 && t<=200){
            int s;
            s=2*v*t;
            printf("%d\n",s);
        }
    }
    return 0;
}
