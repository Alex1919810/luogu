#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct STU
{
    float id;
    float sc;
}stu[10000];

bool cmp(STU a,STU b)
{
    if(a.sc==b.sc)
    {
        return a.id<b.id;
    }
    else return a.sc>b.sc;
}

int main()
{
    long long n,t=0,k;
    float m;
    cin>>n>>m;
    for(long long i=0;i<n;i++)
    {
        cin>>stu[i].id>>stu[i].sc;
    }
    sort(stu,stu+n,cmp);
    m=m*1.5;
    k=int(m);
    for(long long j=0;j<n;j++)
    {
        if(stu[j].sc>=stu[k-1].sc)
        {
            t++;
        }
        else break;
    }
    cout<<stu[k-1].sc<<" "<<t<<endl;
    for(long long l=0;l<t;l++)
    {
        cout<<stu[l].id<<" "<<stu[l].sc<<endl;
    }

}