#include<iostream>
#include<algorithm>
using namespace std;
long long w,n;
long long sum;
long long l=1,r;
long long a[30005];
int main()
{
    cin>>w;
    cin>>n;
    r=n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    while (l<=r)
    {
        if(a[l]+a[r]<=w)
        {
            l++;
            r--;
            sum++;
        }
        else{
            r--;
            sum++;
        }
    }
    cout<<sum;
}