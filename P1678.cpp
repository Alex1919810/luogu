#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long m,n,sum;
long long a[100005],b[100005];
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    sort(a+1,a+1+n);
    for(long long i=1;i<=m;i++)
    {
       /* if(b[i]<=a[1]) 
        {
            sum+=a[1]-b[i];
            continue;
        }*/
        long long l=1,r=n;
        while (l<r)
        {
            long long mid=(l+r)/2;
            if(a[mid]<=b[i])
                l=mid+1;
            else
                r=mid;
        }
        if(b[i]<=a[1]) sum+=a[1]-b[i];
        else sum+=min(abs(a[l-1]-b[i]),abs(a[l]-b[i]));
    }
    cout<<sum;
}