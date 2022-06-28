#include<iostream>
#include<algorithm>
using namespace std;
string s;
int n,m;
int w[51],b[51],r[51];

int check(char c)
{
    int ans=0;
    for(int j=0;j<m;j++)
    {
        if(s[j]!=c)
            ans++;
    }
    return ans;
}

int main()
{
    int sum=100000;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        w[i]=w[i-1]+check('W');
        b[i]=b[i-1]+check('B');
        r[i]=r[i-1]+check('R');
    }
    for(int i=1;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            sum=min(sum,w[i]+b[j]-b[i]+r[n]-r[j]);
    cout<<sum;  
}