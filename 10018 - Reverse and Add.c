#include<stdio.h>
#include<math.h>
int main ()
{
    long long int j,T,num,k,a2;
    scanf("%lld",&T);
    for (j=1;j<=T;j++){
        scanf("%lld",&num);
        for(k=0;k<1000;k=k+1){
            long long int num1=num,count=0;
            while(num1!=0){
                num1=num1/10;
                count=count+1;
            }
            num1=num;
            long long int rev=0,i=1;
            while(i<=count){
                a2=num1%10;
                rev=rev+a2*pow(10,count-i);
                num1=num1/10;
                i=i+1;
            }
            if(num==rev){
                break;
            }
            num=num+rev;
        }
        printf("%lld %lld\n",k,num);
    }
    return 0;
}
