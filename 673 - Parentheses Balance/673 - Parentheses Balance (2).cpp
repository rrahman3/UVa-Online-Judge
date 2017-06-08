#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<stack>
#include<string>
#include<queue>
#define SIZE 100
using namespace std;

int main()
{
    int testCases;
    string str;
    cin>>testCases;
    getchar();

    for(int cases=1;cases<=testCases;cases++)
    {
        stack<char>S;
        getline(cin,str);

        int check = 1;

        for(int i=0; i<str.size(); i++)
        {

            if( str[i] == '(' || str[i] == '[' )
            {
                S.push(str[i]);
            }

            else if( str[i] == ')' || str[i] == ']' )
            {
                if(!S.empty())
                {
                    if( S.top() == '(' && str[i] == ')')
                    {
                        S.pop();
                    }
                    else if( S.top() == '[' && str[i] == ']' )
                    {
                        S.pop();
                    }
                    else
                    {
                        check = 0;
                        break;
                    }
                }

                else
                {
                    check = 0;
                    break;
                }
            }
        }

        if(check==1 && S.empty())
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
