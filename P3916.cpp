#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>G[200000];
int a[200000];
int n,m;
void dfs(int x,int y)
{
    if(a[x]) return;
    a[x]=y;
    for(int i=0;i<G[x].size();i++)
    {
        dfs(G[x][i],y);
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        G[b].push_back(a);
    }
    for(int j=n;j>0;j--)
        dfs(j,j);
    for(int k=1;k<=n;k++)
        cout<<a[k]<<" ";
}