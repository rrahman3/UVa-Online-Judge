#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for (i=1;i<=T;i++){
        long int a,b;
        double x,f,c;
        c=acos(-1);
        scanf("%ld %ld",&a,&b);
        if(b==0){
            x=c/2;
            f=a;
        }
        else{
            if(a>=0 && b>0){
                x=atan(a/b);
                f=a*sin(x)+b*cos(x);
            }
            else if(a<0 && b>0){
                x=c+atan(a/b);
                f=a*sin(x)+b*cos(x);
            }
            else if(a<0 && b<0){
                x=c+atan(a/b);
                f=a*sin(x)+b*cos(x);
            }
            else if(a>=0 && b<0){
                x=2*c+atan(a/b);
                f=a*sin(x)+b*cos(x);
            }
        }
        if(f<0){
            f=f*(-1);
        }
        printf("%.02lf %.02lf\n",x,f);
    }
    return 0;
}
