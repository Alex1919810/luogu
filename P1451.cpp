#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

struct zh{
    int a;
    int b;
};

int G[200][200];
int vis[200][200];
int n,m,ans;
char c;
queue<zh>q;
int b[4][2]={0,1,1,0,-1,0,0,-1};

void bfs(int x,int y)
{
    ans++;
    vis[x][y]=1;
    zh t;
    t.a=x;
    t.b=y;
    q.push(t);
    while(!q.empty())
    {
        zh p=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int xx=p.a+b[i][0];
            int yy=p.b+b[i][1];
            if(G[xx][yy]!=0 && vis[xx][yy]==0)
            {
                zh l;
                l.a=xx;
                l.b=yy;
                vis[xx][yy]=1;

                q.push(l);
            }
        }
    }

}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c;
            G[i][j]=c-'0';
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(vis[i][j]==0 && G[i][j]!=0) bfs(i,j);
        }
    }
    cout<<ans;
}