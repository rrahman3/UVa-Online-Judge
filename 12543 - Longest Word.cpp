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
    ifstream fin ("12543 - Longest Word.txt");
    if(!fin)
    {
        cout<<"Can't open 12543 - Longest Word.txt\n";
        exit(-1);
    }

    int testCases;
    string str;
    //fin>>testCases;
    //stack<char>S;
    fin>>str;
    int size = 0;
    string ansStr;

    while(str!="E-N-D")
    {
        if(str.size()>size)
        {
            size = str.size();
            ansStr = str;
        }
        fin>>str;
        //cout<<str<<" ";
    }
    //cout<<endl;

    for(int i=0;i<ansStr.size();i++)
    {
        if(ansStr[i]>='A' && ansStr[i]<='Z')
        {
            ansStr[i] = ansStr[i] + 'a' - 'A';
        }
    }

    cout<<ansStr<<endl;

    fin.close();
    return 0;
}
