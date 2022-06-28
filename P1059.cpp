#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1001]={0};
    int n,m,i,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    t=unique(a,a+n)-a;
    cout<<t<<endl;
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<" ";
    }
}