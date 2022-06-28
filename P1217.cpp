#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
bool hw(int x)
{
    string s,t;
    s=to_string(x);
    t=s;
    reverse(s.begin(),s.end());
    if(s==t)
        return true;
    else    
        return false;
}

bool zs(int x)
{
    int i;
	for(i=3;i<=sqrt(x);i+=2)
		if(x%i==0) return false;
	return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
    if(b==100000000) b=9999999;
    if(a%2==0) a++;
    for(int i=a;i<=b;i+=2)
    {
        if(hw(i)==false) continue;
        else if(zs(i))
            cout<<i<<endl;
    }

}