#include<bits/stdc++.h>
using namespace std;
int a[1000]={0},b[1000]={0},c[1000]={0},d[1000]={0};
int n,sum=0;
void find(int x)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(b[i]==0 && c[x+i]==0 && d[x-i+n]==0)
        {
            a[x]=i;
            b[i]=1;
            c[x+i]=1;
            d[x-i+n]=1;
            if(x==n)
            {
                sum++;
                if(sum<=3)
                {
                    for(j=1;j<=n;j++)
                        cout<<a[j]<<" ";
                    cout<<endl;
                }
                
            }
            else
            {
                find(x+1);
            }
            b[i]=0;
            c[x+i]=0;
            d[x-i+n]=0;
        }
        
    }
    return;
}
int main()
{
    cin>>n;
    find(1);
    cout<<sum<<endl;
    return 0;
}