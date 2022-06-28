#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long a[2000002]={0},b[1001]={0};
int main()
{
    long long i,j;
    cin>>m>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=1;i<=m;i++)
    {
        for(j=0;j<b[i];j++)
        {
            cout<<i<<" ";
        }
    }
}