#include<iostream>
#include<iomanip>
using namespace std;
int n,r;
int a[100];
void dfs(int x)
{
    if(x>r)
        {
            for(int i=1;i<=r;i++)
            {
                cout<<setw(3)<<a[i];
            }
            cout<<endl;
            return;
        }
    for(int i=a[x-1]+1;i<=n;i++)
    {
        a[x]=i;
        dfs(x+1);
    }

}

int main()
{
    cin>>n>>r;
    dfs(1);
}