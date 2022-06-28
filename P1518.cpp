#include<iostream>
#include<algorithm>
using namespace std;

int map[12][12];



struct rw
{
    int x;
    int y;
    int fx;
}C,F;

void move(long long time)
{

    if(C.x==F.x && C.y==F.y)
    {
        cout<<time;
        return;
    }

    if(time==20000)
    {
        cout<<0;
        return;
    }

    if(C.fx==1)
    {
        C.y-=1;
        if(C.y==0)
        {
            C.y+=1;
            C.fx=2;
        }
        else if(map[C.y][C.x]==1)
        {
            C.y+=1;
            C.fx=2;
        }
    }
    else if(C.fx==2)
    {
        C.x+=1;
        if(C.x==11)
        {
            C.x-=1;
            C.fx=3;
        }
        else if(map[C.y][C.x]==1)
        {
            C.x-=1;
            C.fx=3;
        }
    }
    else if(C.fx==3)
    {
        C.y+=1;
        if(C.y==11)
        {
            C.y-=1;
            C.fx=4;
        }
        else if(map[C.y][C.x]==1)
        {
            C.y-=1;
            C.fx=4;
        }
    }
    else if(C.fx==4)
    {
        C.x-=1;
        if(C.x==0)
        {
            C.x+=1;
            C.fx=1;
        }
        else if(map[C.y][C.x]==1)
        {
            C.x+=1;
            C.fx=1;
        }
    }

    if(F.fx==1)
    {
        F.y-=1;
        if(F.y==0)
        {
            F.y+=1;
            F.fx=2;
        }
        else if(map[F.y][F.x]==1)
        {
            F.y+=1;
            F.fx=2;
        }
    }
    else if(F.fx==2)
    {
        F.x+=1;
        if(F.x==11)
        {
            F.x-=1;
            F.fx=3;
        }
        else if(map[F.y][F.x]==1)
        {
            F.x-=1;
            F.fx=3;
        }
    }
    else if(F.fx==3)
    {
        F.y+=1;
        if(F.y==11)
        {
            F.y-=1;
            F.fx=4;
        }
        else if(map[F.y][F.x]==1)
        {
            F.y-=1;
            F.fx=4;
        }
    }
    else if(F.fx==4)
    {
        F.x-=1;
        if(F.x==0)
        {
            F.x+=1;
            F.fx=1;
        }
        else if(map[F.y][F.x]==1)
        {
            F.x+=1;
            F.fx=1;
        }
    }

    time+=1;
    move(time);
}

int main()
{
    char c;
    long long time=0;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cin>>c;
            if(c=='*') map[i][j]=1;
            if(c=='.') map[i][j]=0;
            if(c=='C') 
            {
                map[i][j]=0;
                C.x=j;
                C.y=i;
                C.fx=1;
            }
            if(c=='F') 
            {
                map[i][j]=0;
                F.x=j;
                F.y=i;
                F.fx=1;
            }
        }
    }
    move(time);
}