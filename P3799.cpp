#include<iostream>
#include<cmath>
using namespace std;
const int mod=1e9+7;
long long a[6000]={0};
long long ans=0;
int main()
{
    long long n,b;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>b;
        a[b]+=1;
    }
    for(long long j=2;j<=5000;j++)
    {
        if(a[j]>=2)
        {
            long long p=0;
            for(long long l=1;l<a[j];l++)
            {
                p+=l;
            }
            for(long long k=1;k<=j/2;k++)
            {
                if(k==j-k && a[k]>=2)
                {
                    long long m=0;
                    for(long long y=1;y<a[k];y++)
                    {
                        m+=y;
                    }
                    ans=(ans+(p*m))%mod;
                }
                if(k!=j-k && a[k]!=0 && a[j-k]!=0)
                {
                    long long t=0;
                    t=p*a[k]*a[j-k]%mod;
                    ans+=t;
                }

            }
        }
    }
    cout<<ans;
}