#include<cstdio>
#include<iostream>
using namespace std;
int find(double x,double m,double n,int k)
{
	int i;
	double sum=0,y=1;
	for(i=0;i<k;i++)
	{
		y=y*(1+x);
		sum=sum+(n/y);
	}
	
	if(sum==m)
		return 0;
	if(sum>m)
		return -1;
	else
		return 1;
}
int main()
{
	double m,n,l=0,r=100,mid;
	int k,f;
	scanf("%lf %lf %d",&m,&n,&k);
	while(r-l>=0.0001)
	{
		mid=(l+r)/2;
		f=find(mid,m,n,k);
		if(f==1)
			r=mid;
		if(f==0)
			break;
		if(f==-1)
			l=mid;
	}
	printf("%.1lf",mid*100);
	return 0;
}