#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct fl{
    int floor;
    int sum;

};

queue<fl>F;
fl fir;
int n,a,b;
int k[300];
int c[300];

void bfs()
{
    F.push(fir);
    fl g;
    while(!F.empty())
    {
        g=F.front();
        F.pop();
        if(g.floor==b) break;
        for(int lg=-1;lg<=1;lg+=2)
        {
            int now=g.floor+(lg*k[g.floor]);
            if(now>=1 && now<=n && c[now]!=1)
            {
                fl o;
                o.floor=now;
                o.sum=g.sum+1;
                F.push(o);
                c[now]=1;
            }
        }
    }
    if(g.floor==b) cout<<g.sum;
    else cout<<"-1";
}

int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>k[i];
    }
    for(int j=1;j<=300;j++)
    {
        c[j]=0;
    }
    c[a]=1;
    fir.floor=a;
    fir.sum=0;
    bfs();
}