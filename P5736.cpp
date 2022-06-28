#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool check(long long x)
{
    long long t,i;
    if(x==1)
        return false;
    if(x==3 ||x==2)
        return true;
    if(x%6!=1 && x%6!=5)
        return false;
    t=sqrt(x);
    for(i=5;i<=t;i+=6)
    {
        if(x%i==0 || x%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int n,i;
    long long x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(check(x))
            cout<<x<<" ";
    }
}

