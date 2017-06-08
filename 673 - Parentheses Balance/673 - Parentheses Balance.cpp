#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<stack>
#include<queue>
#define SIZE 100
using namespace std;

class ParenthesisBalance
{
    string str;
    stack<char>S;
public:
    ParenthesisBalance(string str);
    void checkParenthesesBalance();
};

ParenthesisBalance::ParenthesisBalance(string str)
{
    this->str = str;
    cout<<str;
}

void ParenthesisBalance::checkParenthesesBalance()
{

}

class operation
{
public:
    static void readFromFile(ParenthesisBalance &P);
};

void operation::readFromFile(ParenthesisBalance &P)
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

    for(int i=1;i<=testCases;i++)
    {
        fin>>str;
        P.checkParenthesesBalance();
        //cout<<str<<endl;
    }

    fin.close();
}

int main()
{
    operation::readFromFile();
    return 0;
}

