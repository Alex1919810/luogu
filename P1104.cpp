#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct node{
	string name;
	int year,mon,day;
	int level;
}nn[105];

bool cmp(node a,node b)
{
	if(a.year != b.year)
	return a.year < b.year;
	else
	{
	if(a.mon != b.mon) return a.mon < b.mon;
	else if(a.day == b.day && a.mon == b.mon) return a.level > b.level;
	else  return a.day < b.day;
	}
}

int main()
{
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>nn[i].name>>nn[i].year>>nn[i].mon>>nn[i].day;
		nn[i].level = i;
	}
	sort(nn + 1,nn + n + 1,cmp);
	for(int i = 1; i <= n; ++i) cout<<nn[i].name<<endl;
}