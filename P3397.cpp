#include<bits/stdc++.h>
using namespace std;
int a[1024][1024];
int main()
{
    
    int n,m,x1,x2,y1,y2,i,j,t=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        for(j=x1;j<=x2;j++)
        {
            a[j][y1]++;
            a[j][y2+1]--;
        }
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            t=t+a[j][i];
            cout<<t<<" ";
        }
        cout<<endl;
        t=0;
    }
}