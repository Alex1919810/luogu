#include<iostream>
#include<algorithm>
using namespace std;
long long n,m;
long long l,r;
long long p;
long long a[100005];
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        l=max(l,a[i]);
        r+=a[i];
    }
    while (l<=r)
    {
        long long mid=(l+r)>>1;
        long long sum=1;
        long long ans=0;
        for(long long j=1;j<=n;j++)
        {
            if(ans+a[j]<=mid) ans+=a[j];
            else {
                ans=a[j];
                sum++;
            }
        }
        if(sum<=m) 
        {
            r=mid-1;
            p=mid;
        }
        else l=mid+1;
    }
    cout<<p;
}