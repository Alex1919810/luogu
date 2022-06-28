#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
string a,b;
void tree(string a,string b)
{
    if(a.empty()) return;
    if(b.empty()) return;
    char c=a[0];
    int k=b.find(c);
    a.erase(a.begin());
    string l1=a.substr(0,k);
    string r1=a.substr(k);
    string l2=b.substr(0,k);
    string r2=b.substr(k+1);
    tree(l1,l2);
    tree(r1,r2);
    cout<<c;
}

int main()
{

    cin>>b>>a;
    tree(a,b);
}