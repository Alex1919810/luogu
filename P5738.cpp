#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[21]={0};
int main()
{
    int i,j;
    int sum=0,max=0;
    float p;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }
        sort(a,a+m);
        sum=sum-a[0]-a[m-1];
        if(sum>max)
            max=sum;
        sum=0;
        
    }
    p=(max*1.00)/((m-2)*1.00);
    printf("%.2f",p);
}