#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
void chu(int k,int l,string a,string b)
{
    string str;
    int i,t=0,p,j=0,g=0;
    for(i=0;i<k-l;i++)
        b="0"+b;
    for(i=k-1;i>=0;i--)
    {
        t=(a[i]-'0')+(b[i]-'0')+g;
        g=t/10;
        t=t%10;
        str=char(t+'0')+str;
    }
    if(g!=0)  
        str=char(g+'0')+str;
    cout<<str<<endl;
}
int main()
{
    int k,l;
    string a,b;
    cin>>a>>b;
    k=a.length();
    l=b.length();
    if(k>l)
        chu(k,l,a,b);
    else
        chu(l,k,b,a);

}