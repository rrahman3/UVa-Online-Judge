#include<stdio.h>
#define size 500001
int main ()
{
    int number[size],i,j,k,count=0;
    number[1]=1;
    for(i=2;i<size;i++)
        number[i]=0;
    for(i=2;i<size;i+=2)
        number[i]=1;
    for(i=3;i<size;i+=3)
        number[i]=1;
    for(i=5;i<size;i+=5)
        number[i]=1;
    for(i=7;i<size/2;i++)
    {
        if(number[i]==0)
        {
            for(j=2*i;j<size;j+=i)
            {
                number[j]=0;
            }
        }
    }
    for(i=1;i<size;i++)
    {
        if(number[i]==1)
        {
            count++;
            printf("%d = %d\n",count,i);
        }
    }
    return 0;
}
/*
int main ()
{
    printf("The 1500'th ugly number is <859963392>.");
    return 0;
}
*/
