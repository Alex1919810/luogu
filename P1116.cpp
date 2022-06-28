#include<bits/stdc++.h>
using namespace std;
long long a[10001];
int main ()
{
    long long n,t=0,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    t++;
                }
        }
    }
    cout<<t;
}
