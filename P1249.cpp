#include<iostream>
#include<algorithm>
using namespace std;
long long a[10000],b[10000]={0},c[10000];
int main()
{
    long long i;
    long long n,sum=0;
    cin>>n;
    for(i=2;i<n;i++)
    {
        sum+=i;
        a[i]=i;
        if(sum==n) break;
        else if(sum-n==1)
        {
            a[2]=0;
            a[i]=0;
            a[i+1]=i+1;
            i++;
            break;
        }
        else if(sum-n>1)
        {
            a[sum-n]=0;
            break;
        }
    }
    long long l=1;
    for(long long p=1;p<=i;p++)
    {
        if(a[p]==0) continue;
        c[l]=a[p];
        cout<<c[l]<<" ";
        l++;
    }
    cout<<endl;
    b[1]=1;
    long long t=1;
    for(long long j=1;j<l;j++)
    {
        long long yu=0;
        for(long long k=1;k<=t;k++)
        {
            b[k]=b[k]*c[j]+yu;
            yu=b[k]/10;
            b[k]%=10;
        }
        while(yu>0)
        {
            b[t+1]=yu%10;
            yu/=10;
            t++;
        }
    }
    for(long long r=t;r>=1;r--)
    {
        cout<<b[r];
    }
}