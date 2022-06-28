#include<iostream>
#include<queue>
using namespace std;
int n;
int sum;

priority_queue<int,vector<int>,greater<int>>q;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    while(q.size()>1)
    {
        int x;
        int y;
        x=q.top();
        q.pop();
        y=q.top();
        q.pop();
        sum+=x+y;
        q.push(x+y);
    }
    cout<<sum;
}