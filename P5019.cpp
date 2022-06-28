#include<iostream>
#include<algorithm>
using namespace std;
long long a[100005],b[100005];
long long n;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1) b[1]=a[1];
        else{
            if(a[i]>a[i-1])
            {
                b[i]=b[i-1]+(a[i]-a[i-1]);
            }
            else{
                b[i]=b[i-1];
            }
        }
    }
    cout<<b[n];
}