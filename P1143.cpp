#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int zhuanhuan(char *a,int n){
	int k,b[80],l;
	long long num=0;
	l = strlen(a);
	for (k = 0; k < l; k++) {
		if (a[k] >= '0' && a[k] <= '9') a[k] = a[k] - '0';
		if (a[k] >= 'A' && a[k] <= 'z') a[k] = a[k] - 'A' + 10;
	}
	for (int i = 0; i < l; i++) {
		b[i] = a[i] * pow(n, l - i - 1);
		num = num + b[i];
	}
	return num;
	
}

int main()
{
	int n, m,l,t,i=0,b[80],ans=0;
	char a[80];
	long long num=0;

	cin >> n;

	cin >> a;
	l = strlen(a);
	num=zhuanhuan(a,n);

	cin >> m;
	while (num > 0) {
		b[i] = num % m;
		i++;
		num = num / m;
		ans++;
	}
	for (i = 0; i < ans / 2; i++) {
		t = b[i];
		b[i] = b[ans - i - 1];
		b[ans - i - 1] = t;
	}
	for (i = 0; i < ans; i++) {
		if(b[i]>=10) 
		{
			char c='A';
			c=c+b[i]-10;
			cout<<c;
		}
		else cout<<b[i];
	}
	return 0;





}
