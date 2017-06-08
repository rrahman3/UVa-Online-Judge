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
    ifstream fin ("673 - Parentheses Balance.txt");
    if(!fin)
    {
        cout<<"Can't open 673 - Parentheses Balance.txt\n";
        exit(-1);
    }

    int testCases;
    string str;
    fin>>testCases;
    //stack<char>S;

    for(int cases=1;cases<=testCases;cases++)
    {
        stack<char>S;
        getline(fin,str);
        int check = 1;
        if(str.size()==0)
        {
            //cout<<"halarput\n";
        }
        else
        {
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
        }

        if(check==1 && S.empty())
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }

        //cout<<str<<endl;
    }

    fin.close();
    return 0;
}
