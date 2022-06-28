#include<iostream>
#include<algorithm>
using namespace std;
long long d,n,m;
long long l,r;
long long a[50005];
long long sum;
int main()
{
    cin>>d>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[n+1]=d;
    l=1;
    r=d;
    while (l<=r)
    {
        long long mid=(l+r)/2;
        long long t=0;
        long long now=0;
        for(long long j=1;j<=n+1;j++)
        {
            if(a[j]-a[now]<mid)
            {
                t++;
            }
            else{
                now=j;
            }
        }
        if(t<=m){
            sum=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<sum;
}