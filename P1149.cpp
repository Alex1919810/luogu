#include<iostream>
using namespace std;

int a[11]={6,2,5,5,4,5,6,3,7,6};
int b[2000];

int main()
{
    int n,ans=0;
    cin>>n;
    n-=4;
    b[0]=6;
    for(int i=1;i<2000;i++)
    {
        b[i]=0;
        int t=i;
        while(t>0)
        {
            b[i]+=a[t%10];
            t/=10;
        }
    }
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            if(b[i]+b[j]+b[i+j]==n) 
            {
                ans++;
            }
        }
    }
    cout<<ans;
}