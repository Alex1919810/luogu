#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
stack<long long>s;
long long n;
long long a[4000000],b[4000000];

int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        while(!s.empty() && a[i]>a[s.top()])
        {
            b[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        b[s.top()]=0;
        s.pop();
    }
    for(long long i=1;i<=n;i++)
    {
        printf("%lld ",b[i]);
    }

}