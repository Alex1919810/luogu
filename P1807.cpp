#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

queue<long long>q;
long long n,m,l[60000],G[2000][2000];

int main()
{
    cin>>n>>m;
    for(long long i=0;i<m;i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        G[a][b]=max(G[a][b],c);
    }
    q.push(1);
    while(!q.empty())
    {
        long long t;
        long long p=q.front();

        q.pop();
        for(long long j=1;j<=n;j++)
        {
            if(G[p][j]==0) continue;
            t=l[p]+G[p][j];
            if(l[j]<t)
            {
                l[j]=l[p]+G[p][j];
                q.push(j);
            }
        }
    }
    if(l[n]==0) cout<<-1;
    else cout<<l[n];
}