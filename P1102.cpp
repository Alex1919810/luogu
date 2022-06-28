#include<bits/stdc++.h>
using namespace std;
long long a[200001]={0};
map<long long,long long>m;
int main()
{
    long long n,c,i,sum=0;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        a[i]=a[i]-c;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+m[a[i]];
    }
    cout<<sum<<endl;
}