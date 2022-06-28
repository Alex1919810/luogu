#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<long long ,long long>M;
long long n,m;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long a;
        cin>>a;
        M[a]=i;
    }
    cin>>m;
    for(long long i=1;i<=m;i++)
    {
        long long b;
        cin>>b;
        cout<<M[b]<<endl;
    }
}