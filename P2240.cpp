#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct p
{
    float m;
    float v;
    float d;
}l[200];

bool cmp(p a,p b)
{
    return a.d>b.d;
}

int n,t;

int main()
{
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>l[i].m>>l[i].v;
        l[i].d=l[i].v/l[i].m;
    }
    sort(l,l+n,cmp);
    float ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        if(ans+l[i].m>=t)
        {
            float g=t-ans;
            sum+=g*l[i].d;
            break;
        }
        else{
            ans+=l[i].m;
            sum+=l[i].v;
        }
    }
    printf("%.2lf",sum);
    
}