#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
    return a+b>b+a;
}
int main()
{
    int n;
    string str[100];
    string c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    sort(str,str+n,cmp);
    for(int j=0;j<n;j++)
    {
        c+=str[j];
    }
    cout<<c;
}