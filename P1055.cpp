#include<iostream>
using namespace std;
int main()
{
    string str;
    int n=1,t=0,i;
    cin>>str;
    for(i=0;i<str.length()-2;i++)
    {
        if(str[i]=='-') continue;
        t=t+(str[i]-'0')*n;
        n++;
    }
    t=t%11;
    if(t==10)
    {
        if(str[12]=='X')
        {
            cout<<"Right";
        }
        else{
            str[12]='X';
            cout<<str;
        }
    }
    else
    {
        if(str[12]==(t+'0'))
        {
            cout<<"Right";
        }
        else{
            str[12]=t+'0';
            cout<<str;
        }
    }
}