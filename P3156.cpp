#include<iostream>
using namespace std;
long long a[3000000];
long long n,m;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=m;i++)
    {
        long long t;
        cin>>t;
        cout<<a[t]<<endl;
    }
}