#include<bits/stdc++.h>
using namespace std;
long long a[1005]={0},b[1005]={0};
long long m[9]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
int main()
{
    long long n,q,i,t,j;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(i=1;i<=q;i++)
    {
        cin>>t>>b[i];
        for(j=1;j<=n;j++)
        {
            if(a[j]%m[t]==b[i])
            {
                cout<<a[j]<<endl;
                break;
            }
            else if(j==n)
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }

}