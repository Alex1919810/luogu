#include<iostream>
#include<algorithm>
#include<queue>
#include <iomanip>
using namespace std;
struct ma{
    int x;
    int y;
};

queue<ma>M;
int a[500][500];
int n,m;
ma q;
int walk[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1},{-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

void bfs()
{
    M.push(q);
    while(!M.empty())
    {
        ma p=M.front();
        int x1=p.x;
        int y1=p.y;
        M.pop();
        for(int k=0;k<8;k++)
        {
            int x2=x1+walk[k][0];
            int y2=y1+walk[k][1];
            int d=a[x1][y1];

            if(x2<1 || x2>n ||y2<1 ||y2>m ||a[x2][y2]!=0)
            {
                continue;
            }
            else{
                a[x2][y2]=d+1;
                ma t={x2,y2};
                M.push(t);

            }
        }
    }
}

int main()
{
    cin>>n>>m>>q.x>>q.y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            a[i][j]=0;
        }
    }

    bfs();
    a[q.x][q.y]=0;
 
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==0 && (i!=q.x || j!=q.y))
                a[i][j]=-1;
            //cout<<left<<setw(5)<<a[i][j];   
            if(a[i][j]==-1) cout<<a[i][j]<<"   ";
            else if(a[i][j]<10) cout<<a[i][j]<<"    ";
            else if(a[i][j]<100) cout<<a[i][j]<<"   ";
            else if(a[i][j]<1000) cout<<a[i][j]<<"  ";
            else if(a[i][j]<10000) cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 

}