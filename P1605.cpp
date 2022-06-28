#include<iostream>
#include<cstring>
using namespace std;
int  G[10][10];
int n,m,t;
int x1,y11,x2,y2;
int sum;

void dfs(int a,int b)
{
    //cout<<a<<" "<<b<<endl;
    if(a==x2 && b==y2)
    {
        sum++;
        return;
    }
    else{
        G[a][b]=0;
        if(G[a-1][b]!=0){
            
            dfs(a-1,b);
            G[a-1][b]=1;
        }
        if(G[a+1][b]!=0){
            //cout<<1<<endl;
            dfs(a+1,b);
            G[a+1][b]=1;
        }
        if(G[a][b-1]!=0){
            dfs(a,b-1);
            G[a][b-1]=1;
        }
        if(G[a][b+1]!=0){
            dfs(a,b+1);
            G[a][b+1]=1;
        }
    }
}

int main()
{

    cin>>n>>m>>t;
    cin>>x1>>y11>>x2>>y2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            G[i][j]=1;
        }
    }
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        G[a][b]=0;
    }
    //cout<<G[0][1]<<endl;
    dfs(x1,y11);
    cout<<sum;
}