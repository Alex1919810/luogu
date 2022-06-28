#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,t,k;
	double sum,s=0;   //sum总时间一定要用double型 
	int a[1001],b[1001];      //a数组为每个人的等待时间，b数组用来存每个人所在位置 
	cin>>n;
	for(int i=1;i<=n;i++)    //这个循环用来输入和存位置 
	{
		cin>>a[i];
		b[i]=i;
	}
	for(int i=1;i<=n;i++)    //这个循环用来排序时间和交换位置 
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	for(int i=1;i<=n;i++)   //这个循环用来计算总时间 
	{
		s+=a[i]*(n-i);
	}
	sum=s/n;  //平均时间 
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	printf("%.2f\n",sum);  // 保留小数后两位输出 
	return 0;
}