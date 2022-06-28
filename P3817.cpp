#include<iostream>
#include<algorithm>
using namespace std;
long long n,x;
long long sum;
long long a[100005];

int main()
{
    cin>>n>>x;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }


    for(long long i=1;i<n;i++)
    {
        long long t=a[i]+a[i-1];
        if(t>x)
        {
            long long p=t-x;
            if(p<=a[i])
            {
                a[i]=a[i]-(t-x);
                sum=sum+t-x;
            }
            else{
                a[i]=0;
                sum=sum+p;
            }
        }
        
    }
    cout<<sum;
}