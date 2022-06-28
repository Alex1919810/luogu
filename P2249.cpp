#include<bits/stdc++.h>
using namespace std;
int a[1000003];
int find(int a[],int l,int r,int k)
{
    int mid;
    if(l==r)
    {
        if(a[l]==k)
            return l;
        else
            return -1;
    }
    mid=(l+r)/2;
    if(a[mid]>=k)
        find(a,l,mid,k);
    else
        find(a,mid+1,r,k);
}
int main()
{
    int i,j,k,m,n;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        cin>>k;
        cout<<find(a,1,m,k)<<" ";
    }
    return 0;
}