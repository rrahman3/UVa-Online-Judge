#include<stdio.h>
#include<math.h>
#define size 101
int main ()
{
    int i,j,k,prime[size];
    prime[1]=0;
    for  (i=2;i<size;i++)
        prime[i]=1;
    for(i=2;i<sqrt(size-1)+1;i++)
    {
        if(prime[i]==1)
        {
            for(j=2*i;j<size;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    int count=0;
    for(i=1;i<size;i++)
        if(prime[i]==1)
            count++;
    int prime_number[count];
    for(i=0,j=1;j<size;j++)
        if(prime[j]==1)
            prime_number[i++]=j;
    int add=0;
    int number[size][count];
    for(i=0;i<size;i++)
        for(j=0;j<count;j++)
            number[i][j]=0;
    int n;
    for(i=2;i<size;i++)
    {
        n=i;
        for(j=0;j<count;j++)
        {
            for(;n%prime_number[j]==0;)
            {
                number[i][j]++;
                n=n/prime_number[j];
            }
        }
    }
    int num;
    while(scanf("%d",&num)==1 && num!=0)
    {
        if(num >= 2 && num <= 100)
        {
            int new_count[count];
            for(i=0;i<count;i++)
                new_count[i]=0;
            for(i=2;i<=num;i++)
            {
                for(j=0;j<count;j++)
                {
                    new_count[j]+=number[i][j];
                }
            }
            int a=0;
            printf("%3d! =",num);
            for(i=0;i<count;i++)
            {
                if(a==15 && new_count[i]!=0)
                {
                    printf("\n      %3d",new_count[i]);
                    a=0;
                }
                if(new_count[i]!=0)
                {
                    printf("%3d",new_count[i]);
                    a++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
