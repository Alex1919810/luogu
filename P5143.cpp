#include<bits/stdc++.h>
using namespace std;
struct Node{
	int x,y,z;
}a[50000];
bool cmp(Node x,Node y)
{
    return x.z<y.z;
}
int main(){
    int n;
    double ans;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) 
        scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<n;i++) 
        ans+=sqrt(0.000+(a[i].x-a[i+1].x)*(a[i].x-a[i+1].x)+(a[i].y-a[i+1].y)*(a[i].y-a[i+1].y)+(a[i].z-a[i+1].z)*(a[i].z-a[i+1].z));
	printf("%.3lf",ans);
} 