#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(long long x,long long y)
{
    return x>y;
}
int main()
{
    long long b,m,t=0,sum=0;;
    long long a[30000];
    cin>>m>>b;
    for(long long i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m,cmp);
    for(long long j=0;j<m;j++)
    {
        sum+=a[j];
        t++;
        if(sum>=b)
        {
            cout<<t;
            break;
        }
    }
}