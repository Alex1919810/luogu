#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long k,n,m;
long long ans=0;
vector<long long>G[2000];
long long vis[2000],sum[2000]={0},t[2000];

void dfs(long long i)
{
    vis[i]=1;
    sum[i]++;
    for(long long j=0;j<G[i].size();j++)
    {
        if(!vis[G[i][j]]) dfs(G[i][j]);
    }
}

int main()
{
    cin>>k>>n>>m;

    for(long long i=1;i<=k;i++)
    {
        long long p;
        cin>>p;
        t[i]=p;

    }

    for(long long i=1;i<=m;i++)
    {
        long long a,b;
        cin>>a>>b;
        G[a].push_back(b);
    }
    for(long long i=1;i<=k;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            vis[j]=0;
        }
        dfs(t[i]);
    }
    for(long long i=1;i<=n;i++)
    {

        if(sum[i]==k) ans++;
    }
    cout<<ans;
}