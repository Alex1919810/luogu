#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long n,a[20],b[20];
long long minn=0x7fffffff;
void dfs(long long x,long long s,long long k)
{
    long long t=s*a[x];
    long long p=b[x]+k;
    if(x>n)
    {
        if(s==1 &&k==0) return;
        minn=min(minn,abs(s-k));
        return;
    }
    
    dfs(x+1,s,k);
    dfs(x+1,t,p);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    dfs(1,1,0);
    cout<<minn;
}