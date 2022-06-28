#include<iostream>
#include<algorithm>
using namespace std;
long long n,s;
long long a,b;
long long t[7000];
long long sum;
int main()
{
    cin>>n>>s;
    cin>>a>>b;
    long long p=1;

    for(long long i=1;i<=n;i++)
    {
        long long x,y;
        cin>>x>>y;
        if(x>(a+b)) continue;
        //cout<<x<<" "<<y<<endl;
        t[p]=y;
        p++;
    }
    sort(t+1,t+p);
    //cout<<endl;
    for(long long i=1;i<p;i++)
    {
        if(s-t[i]<0) break;
        sum++;
        s-=t[i];
        //cout<<t[i]<<endl;
    }
    cout<<sum;
}