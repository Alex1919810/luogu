#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;


long long in[10005];
long long out[10005];
vector<long long>G[10005];
queue<long long>q;
long long ans=0,n,m;
long long f[10005];

int main()
{
    cin>>n>>m;
    for(long long i=0;i<m;i++)
    {
        long long a,b;
        cin>>a>>b;
        in[b]++;
        out[a]++;
        G[a].push_back(b);
    }
    for(long long j=1;j<=n;j++)
    {
        if(in[j]==0)
        {    
            f[j]=1;
            q.push(j);
        }
    }
    while(!q.empty())
    {
        long long x=q.front();
        q.pop();
        for(long long k=0;k<G[x].size();k++)
        {
            long long y=G[x][k];
            f[y]=(f[x]+f[y]) % 80112002;
            in[y]--;
            if(in[y]==0)
            {
                q.push(y);
            }
        }
    }
    for(long long t=1;t<=n;t++)
    {
        if(out[t]==0)
            ans=(ans+f[t])%80112002;
    }
    cout<<ans;
}