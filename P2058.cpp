#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

struct hum
{
    int t;
    int g;
};

long long guo[200000];
long long n,ans;
queue<hum>q;
hum h;

int main()
{
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        while(!q.empty())
        {
            h=q.front();
            if(h.t+86400<=a)
            {
                guo[h.g]--;
                if(guo[h.g]==0) ans--;
                q.pop();
                continue;
            }
            break;
        }
        for(long long j=0;j<b;j++)
        {
            cin>>h.g;
            h.t=a;
            q.push(h);
            guo[h.g]++;
            if(guo[h.g]==1) ans++;
        }
        cout<<ans<<endl;
    }
}