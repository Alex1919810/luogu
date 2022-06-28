#include<iostream>
#include<queue>
using namespace std;

queue<pair<int,int>>q;
int n;

int main()
{
    cin>>n;
    for(int i=1;i<=(1<<n);i++)
    {
        int x;
        cin>>x;
        q.push(make_pair(i,x));
    }
    while(q.size()>2)
    {
        pair<int,int> x,y;
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        if(x.second>y.second)
        {
            q.push(x);
        }
        else{
            q.push(y);
        }
    }
    pair<int,int> x,y;
    x=q.front();
    q.pop();
    y=q.front();
    q.pop();
    if(x.second>y.second)
    {
        cout<<y.first;
    }
    else{
        cout<<x.first;
    }
}