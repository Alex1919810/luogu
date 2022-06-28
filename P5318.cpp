#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

long long n,m;
vector <long long> a[100005];
bool b[100005]={false};

void dfs(long long x,long long t)
{
    b[x]=true;
    if(t==0)
    {
        cout<<x<<" ";
        return;
    }
    cout<<x<<" ";
    for(long long i=0;i<a[x].size();i++)
    {
        if(!b[a[x][i]]) dfs(a[x][i],t-1);
    }
}

void bfs()
{
    queue<long long> q;
    q.push(1);
    b[1]=true;
    while(!q.empty())
    {
        long long t=q.front();
        q.pop();
        cout<<t<<" ";
        for(long long i=0;i<a[t].size();i++)
        {
            if(b[a[t][i]]==true) continue;
            q.push(a[t][i]);
            b[a[t][i]]=true;
        }
    }
}

int main()
{
    scanf("%lld %lld",&n,&m);
    for(long long i=0;i<m;i++)
    {
        long long x,y;
        scanf("%lld %lld",&x,&y);
        a[x].push_back(y);
    }
    for(long long i=1;i<=n;i++)
        sort(a[i].begin(),a[i].end());
    dfs(1,n);
    cout<<endl;
    for(long long i=1;i<=n;i++) b[i]=false;
    bfs();
}