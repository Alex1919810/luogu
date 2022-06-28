#include<iostream>
using namespace std;
long long a[1000005];
int main()
{
    long long n;
    cin>>n;
    a[1]=1;
    a[2]=2;
    a[3]=5;
    for(long long i=4;i<=n;i++)
    {
        a[i]=(a[i-1]*2)%10000+a[i-3]%10000;
        a[i]%=10000;
    }
    cout<<a[n];
}