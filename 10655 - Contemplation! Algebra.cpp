#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define size 2
#define type long long int
using namespace std;

type mat_exp[size][size], mat_mult[size][size], mat_A[size][size], i, j, k;

void matrix_multiplication ( type mat_A[][size] , type mat_B[][size] );

void matrix_exponenciation ( type mat_A[][size] , type n );

int main ()
{
    type p,q,n,f0,f1,ans;
    while(scanf("%lld %lld %lld",&p,&q,&n)==3)
    {
        if ( p == 0 && q == 0 && scanf("%lld",&n)==1)
            exit(0);
        else
        {
            scanf("%lld",&n);
            if (n == 0)
                printf("2\n");
            else if ( n == 1)
                printf("%lld\n",p);
            else
            {
                n = n-1;
                mat_A[0][0] = p;    mat_A[0][1] = -q;    mat_A[1][0] = 1;    mat_A[1][1] = 0;
                matrix_exponenciation ( mat_A , n );
                ans = mat_exp[0][0] * p + mat_exp[0][1] * 2 ;
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}

void matrix_multiplication ( type mat_A[][size] , type mat_B[][size] )
{
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            mat_mult[i][j]=0;
            for(k=0;k<size;k++)
            {
                mat_mult[i][j] += mat_A[i][k] * mat_B[k][j];
            }
        }
    }
}

void matrix_exponenciation ( type A[][size] , type n )
{
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            mat_exp[i][j] = ( i==j );
        }
    }
    while (n)
    {
        if (n%2 == 1)
        {
            matrix_multiplication( mat_exp , mat_A );
            for (i=0;i<size;i++)
            {
                for(j=0;j<size;j++)
                {
                    mat_exp[i][j] = mat_mult[i][j];
                }
            }
        }
        matrix_multiplication( mat_A, mat_A );
        for (i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                mat_A[i][j] = mat_mult[i][j];
            }
        }
        n = n/2;
    }
}

