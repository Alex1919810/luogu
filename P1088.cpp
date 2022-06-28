#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int a[20000];
int main()
{
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) next_permutation(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}