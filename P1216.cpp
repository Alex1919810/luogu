#include<iostream>
using namespace std;
int a[1500][1500],b[1500][1500];
int r;
int main()
{
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>b[i][j];
            //b[i][j]=a[i][j];
        }
    }
    for(int i=r-1;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            b[i][j]=b[i][j]+max(b[i+1][j+1],b[i+1][j]);
        }
    }
    cout<<b[1][1];
}