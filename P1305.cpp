#include<iostream>
using namespace std;

struct tree{
    char lc;
    char rc;
}t[100];

int n,beg;

void bl(int x){

        char c;
        c='a'+x;
        cout<<c;
        if(t[x].lc!='*') bl(t[x].lc-'a');
        if(t[x].rc!='*') bl(t[x].rc-'a');
    
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        t[s[0]-'a'].lc=s[1];
        t[s[0]-'a'].rc=s[2];
        if(i==1) beg=s[0]-'a';
    }
    bl(beg);
}