#include<iostream>
using namespace std;
long long a[1001];
int main()
{
    int n,i;
    a[0]=a[1]=1;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
            a[i]=a[i-1]+a[i/2];
        else
            a[i]=a[i-1];
    }
    cout<<a[n];
}