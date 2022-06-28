#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

queue<int>q;
bool f[2000];
int n,m,ans;

int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(f[a]!=0) continue;
        else{
            if(q.size()<m)
            {
                q.push(a);
                f[a]=1;
                ans++;
            }
            else if(q.size()==m)
            {
                f[q.front()]=0;
                q.pop();
                q.push(a);
                f[a]=1;
                ans++;
            }
        }
    }
    cout<<ans;
}