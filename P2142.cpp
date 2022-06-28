#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
void chu(int k,int l,string a,string b,int f)
{
    string str;
    int i,t=0,p,j=0,g=0,c=0;
    for(i=0;i<k-l;i++)
        b="0"+b;
    for(i=k-1;i>=0;i--)
    {
        t=(a[i]-'0')-(b[i]-'0')+g;
        if(t<0)
        {
            g=-1;
            t=10+t;
        }
        else
            g=0;
        str=char(t+'0')+str;
    }
    if(f==0)
        cout<<"-";
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='0' && c==0)
            continue;
        else
        {
            c=1;
            cout<<str[i];
        }
    }
    if(c==0)
        cout<<0;
}
int main()
{
    int k,l;
    string a,b;
    cin>>a>>b;
    k=a.length();
    l=b.length();
    if(k>=l)
        chu(k,l,a,b,1);
    else
        chu(l,k,b,a,0);

}