#include<bits/stdc++.h>
using namespace std;
struct stu
{
    int id;
    int yw;
    int sx;
    int yy;
    int sum;
}student[400];

bool cmp(stu a,stu b)
{
    if(a.sum==b.sum)
    {
        if(a.yw==b.yw)
        {
            return a.id<b.id;
        }
        else
        {
            return a.yw>b.yw;
        }
    }
    else
    {
        return a.sum>b.sum;
    }
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>student[i].yw>>student[i].sx>>student[i].yy;
        student[i].sum=student[i].yw+student[i].sx+student[i].yy;
        student[i].id=i+1;
    }
    sort(student,student+n,cmp);
    for(i=0;i<5;i++)
    {
        cout<<student[i].id<<" "<<student[i].sum<<endl;
    }

}