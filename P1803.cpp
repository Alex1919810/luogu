#include<algorithm>
#include<iostream>
using namespace std;
struct T
{
    int a;
    int b;
}t[1000005];

int n;
int sum=1;
bool cmp(T x,T y)
{
    return x.b<y.b;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i].a>>t[i].b;
    }
    sort(t+1,t+n+1,cmp);
    int temp=t[1].b;
    for(int i=2;i<=n;i++)
    {
        if(t[i].a>=temp)
        {
            sum++;
            temp=t[i].b;
        }
    }
    cout<<sum;
}