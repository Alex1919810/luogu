#include<iostream>
#include<algorithm>
using namespace std;
long long n,m;
struct P
{
    long long x;
    long long y;
}p[10000];
bool cmp(P a,P b)
{
    return a.x<b.x;
}
long long sum;
long long t;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>p[i].x>>p[i].y;
    }
    sort(p+1,p+1+m,cmp);
    for(long long i=1;i<=m;i++)
    {
        if(t+p[i].y>n)
        {
            long long l=n-t;
            sum+=p[i].x*l;
            break;
        }
        else{
            t+=p[i].y;
            sum+=p[i].y*p[i].x;
      
        }
    }
    cout<<sum;
}