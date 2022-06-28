#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char a1[10001];
long long b, a[10001],i,x=0,j,c[10001];
int main ()
{
    cin>>a1>>b;
    int lena=strlen(a1);
    for(i=1;i<=lena;i++)
        a[i]=a1[i-1]-'0';
    for(i=1;i<=lena;i++)
    {
        c[i]=(x*10+a[i])/b;
        x=(x*10+a[i])%b;
    }
    j=1;
    while(c[j]==0&&j<lena)
        j++;
    for(i=j;i<=lena;i++)
        cout<<c[i]; 
    return 0;
    
}