#include<iostream>
#include<queue>
using namespace std;
int t[1000][1000],c[1000][1000];
struct point
{
    int x;
    int y;
    int time;
};
queue<point>q;
int m;
int b1[4]= {0,0,1,-1},b2[4]= {1,-1,0,0};
int main()
{
    cin>>m;
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            t[i][j]=-1;
        }
    }
    for(int i=0;i<m;i++)
    {
        point p;
        cin>>p.x>>p.y>>p.time; 
        if(t[p.x][p.y]>p.time || t[p.x][p.y]==-1)
        {
            t[p.x][p.y]=p.time;
        }
        for(int j = 0;j<4;j++)
        {
            int a,b;
            a=p.x+b1[j];
            b=p.y+b2[j];
            if(a>=0 && b>=0 &&(t[a][b]==-1 || p.time<t[a][b]))
            {
                t[a][b]=p.time;
            }
        }
    }
    point p;
    p.x=0;
    p.y=0;
    p.time=0;
    c[0][0]=1;
    q.push(p);
    while (!q.empty())
    {
        point l;
        l=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int a,b,d;
            a=l.x+b1[i];
            b=l.y+b2[i];
            d=l.time+1;
            if(a>=0 &&b>=0 && c[a][b]==0 &&(t[a][b]==-1 || t[a][b]>d))
            {
                if(t[a][b]==-1)
                {
                    cout<<d;
                    return 0;
                }
                else{
                    c[a][b]=1;
                    point k;
                    k.x=a;
                    k.y=b;
                    k.time=d;
                    q.push(k);
                }
            }
        }
    }
    cout<<-1;
    
}
