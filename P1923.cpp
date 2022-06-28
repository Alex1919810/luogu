#include<bits/stdc++.h>
using namespace std;
int a[5000010];
void qs(int l,int r,int key)
{
    int mid=a[(l+r)/2];
    int i=l,j=r;
    while(i<=j)
    {
        while(a[j]>mid)
		j--;
        while(a[i]<mid)
		i++;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;  
        }
    }
    if(key<=j) qs(l,j,key);
    else if(key>=i) qs(i,r,key);
    else
    {
        printf("%d",a[j+1]);
        return;
    }

}
int main()
{
    int n,i,key;
    scanf("%d %d",&n,&key);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qs(0,n-1,key);
    return 0;
}