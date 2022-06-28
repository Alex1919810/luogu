#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long t,n,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>a;
        long long length=1; 
        long long b[50000]={0};
        long long ans=0;
        b[1]=1;
        for(long long j=2;j<=n;j++)
        {
            int yu=0;
            for(long long k=1;k<=length;k++)
            {
                b[k]=b[k]*j+yu;
                yu=b[k]/10;
                b[k]=b[k]%10;
            }
            long long p=length;
            while(yu>0)
            {
                b[p+1]=yu%10;
                yu/=10;
                p++;
            }
            length=p;
     

        }
        for(long long p=1;p<=length;p++)
        {
            if(b[p]==a)
            {
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
}