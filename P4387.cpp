#include<iostream>
#include<stack>
using namespace std;


int q,n;
int a[200000],b[200000];

int main()
{
    cin>>q;
    while(q--)
    {
        stack<int>s;
        int ans=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        for(int i=1;i<=n;i++)
        {
            s.push(a[i]);
            while(s.top()==b[ans]) 
            {
                ans++;
                s.pop();
                if(s.empty()) break;
            }
        }
        if(!s.empty()) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}