#include<iostream>
using namespace std;
int n,m,t,a;
int ans=1;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(t+a<=m)
        {
            t+=a;
        }
        else{
            ans++;
            t=a;
        }
    }
    cout<<ans;
}