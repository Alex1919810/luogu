#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long n,f=0;
    long long a[2000],b[2000];
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long j=0;j<n-1;j++)
    {
        b[j]=abs(a[j]-a[j+1]);
    }
    sort(b,b+n-1);
    for(long long k=0;k<n-1;k++)
    {
        if(b[k]!=k+1)
        {
            f=1;
            break;
        }
    }
    if(f==1) cout<<"Not jolly";
    else cout<<"Jolly";
}