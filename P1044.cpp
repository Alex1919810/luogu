#include<iostream>
using namespace std;
long long a[20]={1,1};
int main()
{
    int n,i,j;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            a[i]+=a[j-1]*a[i-j];
    }
    cout<<a[n];
}