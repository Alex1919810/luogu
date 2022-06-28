#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long n,k,sum=0,ans=0;
long long a[30],b[30];

bool pr()
{
    long long he=0;
    for(long long j=0;j<k;j++)
    {
        he+=b[j];
    }
    //cout<<he<<b[0]<<b[1]<<b[2]<<endl;
    if(he==2) return true;
    if(he%2==0) return false;
    for(long long i=3;i<=sqrt(he);i+=2)
    {
        if(he%i==0) return false;
    }
    return true;
}

void dfs(long long x)
{
    for(long long i=x;i<=n;i++)
    {
        b[ans]=a[i];
        ans+=1;
        if(ans==k)
        {
            if(pr())
                sum++;
        }
        else
            dfs(i+1);
        b[ans-1]=0;
        ans--;
    }
    return;
}


int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dfs(1);
    cout<<sum;
}