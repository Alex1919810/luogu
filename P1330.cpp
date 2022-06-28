#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

queue<long long>q;
vector<long long>G[20000];

long long n,m,sum;
long long vis[20000],ans[2],col[20000];


int main()
{
    cin>>n>>m;
    while(m--)
    {
        long long a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(long long i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            ans[0]=1;
            ans[1]=0;
            col[i]=0;
            q.push(i);
            while(!q.empty())
            {
                long long t=q.front();
                q.pop();
                vis[t]=1;
                for(long long j=0;j<G[t].size();j++)
                {
                    if(!vis[G[t][j]])
                    {
                        q.push(G[t][j]);
                        col[G[t][j]]=(col[t]+1)%2;
                        ans[col[G[t][j]]]+=1;
                    }
                    else{
                        if(col[t]==col[G[t][j]])
                        {
                            ans[0]=-1;
                            ans[1]=-1;
                            break;
                        }
                    }
                }
                if(ans[0]==-1) break;
            }
            if(ans[0]==-1)
            {
                cout<<"Impossible";
                return 0;
            }
            else{
                 sum+=min(ans[0],ans[1]);
            }
        }
    }
    cout<<sum;
}