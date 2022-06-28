#include<iostream>
using namespace std;
int main()
{
    long long z[23][23]={0};
    bool ma[23][23]={0};
    int i,j,a,b,m,n;
    z[1][1]=1;
    cin>>a>>b>>m>>n;
    a++;
    b++;
    m++;
    n++;
    ma[m][n]=1;
    ma[m-2][n+1]=1;
    ma[m-2][n-1]=1;
    ma[m-1][n+2]=1;
    ma[m-1][n-2]=1;
    ma[m+1][n+2]=1;
    ma[m+1][n-2]=1;
    ma[m+2][n+1]=1;
    ma[m+2][n-1]=1;
    
    for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++) 
            {
                if((i!=1||j!=1)&&!ma[i][j])
                    {
                        z[i][j]=z[i-1][j]+z[i][j-1];
                    }
            }
        }     
    cout<<z[a][b];
    return 0;

}