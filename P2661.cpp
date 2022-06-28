#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long a[200005],vis[200005],r[200005],d[200005];
long long minn=200005;
long long n;

void dfs(long long x,long long y,long long l)
{
    if(y==x &&l)
    {
        minn=min(minn,l);
        return;
    }
    if(vis[a[y]]==0)
    {
        vis[a[y]]=1;
        dfs(x,a[y],l+1);
    }
}

void del(long long x)
{
    d[x]=-1;
    r[a[x]]--;
    if(r[a[x]]==0) del(a[x]);
}

int main()
{
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        r[a[i]]+=1;
    }
    for(long long i=1;i<=n;i++)
    {
        if(r[i]==0 && d[i]!=-1) del(i);
    }
    for(long long i=1;i<=n;i++)
    {
        if(r[i]==0) continue;
        //cout<<i<<endl;
        if(vis[i]!=0) continue;
        dfs(i,i,0);
    }
    cout<<minn;
}