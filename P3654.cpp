#include<iostream>
using namespace std;
char a[1000][1000];
int main()
{
    long long r,c,k;
    long long ans=0;
    cin>>r>>c>>k;
    for(long long i=1;i<=r;i++)
    {
        for(long long j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }

    for(long long i=1;i<=r;i++)
    {
        for(long long j=1;j<=c-k+1;j++)
        {
            bool f=true;
            for(long long p=0;p<k;p++)
            {
                if(a[i][j+p]=='#')
                {
                    f=false;
                    break;
                }
            }
            if(f==true)
            {

                ans++;
            }
        }
    }

    for(long long i=1;i<=c;i++)
    {
        for(long long j=1;j<=r-k+1;j++)
        {
            bool f=true;
            for(long long p=0;p<k;p++)
            {
                if(a[j+p][i]=='#')
                {
                    f=false;
                    break;
                }
            }
            if(f==true)
                {

                    ans++;
                }
        }
    }

    if(k==1) ans/=2;
    cout<<ans;
}