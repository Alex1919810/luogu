#include<iostream>
#include<algorithm>
using namespace std;
long long n,k;
long long l,r;
long long maxn=0;
long long a[100005];
bool pd(long long x)
{
    long long ans=0;
    for(long long i=1;i<=n;i++)
    {
        ans+=a[i]/x;
    }
    return ans>=k;
}
int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        maxn=max(maxn,a[i]);
    }
    l=1;
    r=maxn;
    while (l<=r)
    {
        long long mid=(l+r)/2;
        if(pd(mid)) l=mid+1;
        else r=mid-1;
    }
    cout<<r;
}