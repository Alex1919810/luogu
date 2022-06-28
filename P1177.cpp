#include<iostream>
#include<algorithm>
using namespace std;
void qs(int l,int r,int a[])
{
    int mid=a[(l+r)/2];
    int i=l,j=r;
    while(i<=j)
    {
        while(a[i]<mid)
		i++;
        while(a[j]>mid)
		j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;  
        }
    }
    if(l<j) qs(l,j,a);
    if(i<r) qs(i,r,a);

}
int main()
{
    int n,i;
    int a[100002];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    qs(0,n-1,a);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}