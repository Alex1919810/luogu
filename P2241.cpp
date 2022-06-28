#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,sum1=0,sum2=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==j)
            {
                sum1+=(n-i+1)*(m-j+1);
            }
            else
            {
                sum2+=(n-i+1)*(m-j+1);
            }
        }
    }
    cout<<sum1<<" "<<sum2;
}