#include<iostream>
using namespace std;
int n,m;
int a[300000];

int find(int x)
{
    if(a[x]==x) return x;
    else return a[x]=find(a[x]);
}


int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        int z,x,y;
        cin>>z>>x>>y;
        if(z==1)
        {
            a[find(x)]=find(y);
        }
        else if(z==2)
        {
            if(find(x)==find(y)) cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
    }
}