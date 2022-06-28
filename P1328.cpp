#include<iostream>
using namespace std;
int main()
{
    int a[5][5] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
    int b[300],c[300];
    int n,t,k,sum1=0,sum2=0;
    cin>>n>>t>>k;
    for(int i=0;i<t;i++)
    {
        cin>>b[i];
    }
    for(int j=0;j<k;j++)
    {
        cin>>c[j];
    }
    for(int p=0;p<n;p++)
    {
        sum1+=a[b[p%t]][c[p%k]];
        sum2+=a[c[p%k]][b[p%t]];
    }
    cout<<sum1<<" "<<sum2;
}