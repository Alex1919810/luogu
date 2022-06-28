#include<bits/stdc++.h>
using namespace std;
int f[6000][6000];
int len=1;
void js(int n)
{
    int i;
    for(i=1;i<=len;i++)
    {
        f[n][i]+=f[n-1][i]+f[n-2][i];
        f[n][i+1]=f[n][i]/10;
        f[n][i]%=10;
        if(f[n][len+1]>0) len++;
    }
}
int main()
{
    int n,i;
    cin>>n;
    f[1][1]=1;
    f[2][1]=2;
    for(i=3;i<=n;i++)
    {
        js(i);
    }
    for(i=len;i>=1;i--)
    {
        cout<<f[n][i];
    }
    return 0;
}