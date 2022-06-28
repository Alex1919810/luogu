#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

queue<int>q;
int n,m,e=1;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        if(e==m)
        {
            cout<<q.front()<<" ";
            q.pop();
            e=1;
        }
        else{
            int t=q.front();
            q.push(t);
            q.pop();
            e++;
        }
    }
}