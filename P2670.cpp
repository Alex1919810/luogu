#include<iostream>
using namespace std;
int main()
{
    char a[105][105];
    int b[105][105],n,m,i,j;
    cin>>n>>m;
    for(i=1;i<105;i++)
        for(j=1;j<105;j++)
            b[i][j]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                b[i+1][j+1]++;
                b[i+1][j-1]++;
                b[i+1][j]++;
                b[i][j+1]++;
                b[i][j-1]++;
                b[i-1][j]++;
                b[i-1][j+1]++;
                b[i-1][j-1]++;            
            }
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]=='*')
                cout<<"*";
            else
                cout<<b[i][j];
        }    
        cout<<endl;
    }
    return 0;
}