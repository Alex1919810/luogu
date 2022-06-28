#include<iostream>
using namespace std;
int n,m,p;
int f[10000];

int find(int x)
{
    if(f[x]==x) return x;
    else return f[x]=find(f[x]);
}

void jia(int x,int y)
{
    int a,b;
    a=find(x);
    b=find(y);
    if(a==b) return;
    else {
        f[a]=b;
        return;
    }
}

int main()
{
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
        f[i]=i;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        jia(a,b);
    }
    for(int i=0;i<p;i++)
    {
        int a,b;
        cin>>a>>b;
        if(find(a)==find(b))
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
