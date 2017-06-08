#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<stack>
#include<queue>
#define SIZE 100
using namespace std;

int main()
{
    string str;
    cin>>str;
    int size = 0;
    string ansStr;

    while(str!="E-N-D")
    {
        string newStr;
        for(int i=0,j=0;i<str.size();i++)
        {
            if( ( str[i]>='a' && str[i]<='z' )  || ( str[i]>='A' && str[i]<='Z' ) || str[i] == '-' )
            {
                //newStr[j++] = str[i];
            }
        }
        if(newStr.size()>size)
        {
            size = newStr.size();
            ansStr = newStr;
        }
        cin>>str;
    }

    for(int i=0;i<ansStr.size();i++)
    {
        if(ansStr[i]>='A' && ansStr[i]<='Z')
        {
            ansStr[i] = ansStr[i] + 'a' - 'A';
        }
    }
    cout<<ansStr<<endl;;
    return 0;
}

