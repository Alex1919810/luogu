#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long a[100001]={0};
long long sum=0;
void qs(int l,int r)
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
    if(l<j) qs(l,j);
    if(i<r) qs(i,r);
}
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    qs(0,n);
    int l=0,r=n;
    while(l<r)
    {
        sum=sum+pow(a[l]-a[r],2);
        l++;
        sum=sum+pow(a[l]-a[r],2);
        r--;
    }
    
    printf("%lld",sum);
    
}