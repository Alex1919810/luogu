#include<iostream>
#include<algorithm>
using namespace std;
long long n,m;
long long a[1000005];
long long t,l,r;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        r=max(r,a[i]);
    }
    while (l<=r)
    {
        long long mid=(l+r)>>1;
        t=0;
        for(long long i=1;i<=n;i++)
        {
            if(mid<a[i]) t=t+(a[i]-mid);
        }
        if(t<m) r=mid-1;
        else l=mid+1;
    }
    cout<<r;
    
}