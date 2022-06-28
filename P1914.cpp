#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    string str;
    cin>>n;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        str[i]=(str[i]-'a'+n)%26+'a';
        cout<<str[i];
    }
}