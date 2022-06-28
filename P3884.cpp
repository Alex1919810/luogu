#include<iostream>
#include<algorithm>
using namespace std;

struct tree
{
    int deep;
    int fa;
}t[200];

int de=1,wi[200],wide=0;
int n;
int x,y;
int sum;
int main()
{
    cin>>n;
    t[1].fa=0;
    t[1].deep=1;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        t[b].fa=a;
        t[b].deep=t[a].deep+1;
        wi[t[b].deep]++;
        de=max(t[b].deep,de);
    }
    cin>>x>>y;

    for(int i=1;i<=de;i++)
    {
        wide=max(wide,wi[i]);
    }
    cout<<de<<endl<<wide<<endl;
    if(x==y)
    {
        cout<<0;
        return 0;
    }
    while(t[x].fa!=t[y].fa)
    {
        //cout<<t[x].deep<<" "<<t[y].deep<<endl;
        //cout<<sum<<endl;
        if(t[x].fa==y){
            sum+=2;
            cout<<sum;
            return 0;
        }
        if(t[y].fa==x){
            sum+=1;
            cout<<sum;
            return 0;
        }
        if(t[x].deep>t[y].deep) 
        {
            x=t[x].fa;
            sum+=2;
        }
        if(t[y].deep>t[x].deep) 
        {
            y=t[y].fa;
            sum+=1;
        }
        if((t[x].deep==t[y].deep) && (t[x].fa!=t[y].fa))
        {
            x=t[x].fa;
            y=t[y].fa;
            sum+=3;
        }
    }
    sum+=3;
    cout<<sum;
    return 0;
}


