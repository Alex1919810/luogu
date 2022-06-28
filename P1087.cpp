#include<iostream>
using namespace std;
long long n;
string s;

void fen(long long l,long long r )
{
    long long mid=(l+r)/2;
    if(r!=l)
    {
        fen(l,mid);
        fen(mid+1,r);
    }
    bool B=true,I=true;
    for(int i=0;i<=r-l;i++)
    {
        if(s[l+i]=='1'){
            B=false;
        }
        else if(s[l+i]=='0'){
            I=false;
        }
    }
    if(B) cout<<'B';
    else if(I) cout<<'I';
    else cout<<'F';
}

int main()
{
    cin>>n;
    cin>>s;
    fen(0,(1<<n)-1);
}