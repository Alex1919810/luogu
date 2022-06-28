#include<iostream>
using namespace std;
long long sum[5000000],a[5000000];
int main()
{
    long long n,m,i,mid,l,r,x=0,y=0,z=0;
    
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=a[i]+sum[i-1];
    }
    for(i=1;i<=n;i++)
    {
        l=i;
        r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(sum[mid]-sum[i-1]<=m)
                l=mid+1;
            else
                r=mid-1;
        }
        if(sum[r]-sum[i-1]<=m)
        {
            if(sum[r]-sum[i-1]>z)
            {
                x=i;
                y=r;
                z=sum[r]-sum[i-1];
            }
        }
    }
    cout<<x<<" "<<y<<" "<<z;
    
}