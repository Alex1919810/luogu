#include <iostream>
#include <string>
using namespace std;
string a,b,k[1000000];
long long p=0,y=0,num=0,i,s=0;
int main() 
{
    getline(cin,a);
    getline(cin,b);
    for(i=0;i<a.length();i++)
    {
        a[i]=toupper(a[i]);
    }
    for(i=0;i<b.length();i++)
    {
        b[i]=toupper(b[i]);
    }
    for(i=0;i<b.length();i++) 
    { 
        if(b[i]==' ')
        {
            s++;
            continue;
        }
        k[s]+=b[i];
    }
    for(i=0;i<=s;i++) 
    {  
        if(a==k[i]) 
        {
            if(p==0) 
            {
                y=i;           
            }
            p++;
        }
    }
    for(i=0;i<y;i++)
    {  
        num+=k[i].length()+1;
    }
    if(p==0) 
    {                  
        cout<<-1;
    }
    else 
    {
        cout<<p<<' '<<num;
    }
    return 0;
}