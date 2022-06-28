#include<bits/stdc++.h>
using namespace std;
char d;
int js(int a)
{
    int i=0;
    if(a<=0) i++; 
    while(a)
    {
        a/=10;
        i++;
    }
    return i;
}
void san(char c,int a,int b)
{
    int len=2;
    len+=js(a)+js(b);
    if(c=='a')
        len+=js(a+b);
    if(c=='b')
        len+=js(a-b);
    if(c=='c')
        len+=js(a*b);
    if(c=='a')
        cout<<a<<'+'<<b<<'='<<a+b<<endl;
    if(c=='b')
        cout<<a<<'-'<<b<<'='<<a-b<<endl;
    if(c=='c')
        cout<<a<<'*'<<b<<'='<<a*b<<endl;
    cout<<len<<endl;
    d=c;
}
int main()
{
	string c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0;
        cin>>c;
        if(c[0]=='a'||c[0]=='b'||c[0]=='c')
            {
                cin>>a>>b;
                san(c[0],a,b);
            }
            else
            {
                cin>>b;
                for(int j=0;j<c.length();j++)
                {
                    a=a*10+(c[j]-'0');
                }
                san(d,a,b);
            }
    }
    return 0;
}