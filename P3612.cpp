#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string a;
long long n;
int main()
{
    cin>>a>>n;
    long long l=a.length();
    while(l<n)
    {
        long long i=l;
        while(i<n) i*=2;
        i/=2;
        n=n-1-i;
        if(n==0) n=i;
    }
    cout<<a[n-1];
 
    
}