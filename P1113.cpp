#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>G[10005];
int t[10005],l[10005];
int n,ans=0;
int dfs(int x)
{
    if(t[x]) return t[x];
    for(int i=0;i<G[x].size();i++)
    {
        t[x]=max(t[x],dfs(G[x][i]));
    }
    t[x]+=l[x];
    return t[x];
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>l[i];
        while(cin>>b)
        {
            if(b==0) break;
            G[b].push_back(a);
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,dfs(i));
    }
    cout<<ans;
}   