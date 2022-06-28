#include<iostream>
using namespace std;
long long a[2000],b[2000];
long long m,n;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    b[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=a[i];j--)
        {
            if(j-a[i]>=0)
            {
                b[j]=b[j]+b[j-a[i]];
            }
        }
    }
    cout<<b[m];
}