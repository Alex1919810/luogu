#include<bits/stdc++.h>
using namespace std;
long long a[5000005],b[5000005];
int main()
{
    long long p,n,x,y,z,t=0,min=101;
    long long i,j;
    cin>>n>>p;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=p;i++)
    {
        cin>>x>>y>>z;
        b[x]=b[x]+z;
        b[y+1]=b[y+1]-z;
    }
    for(i=1;i<=n;i++)
    {
        t=t+b[i];
        a[i]=a[i]+t;
        if(a[i]<min)
            min=a[i];
    }
    cout<<min;

}