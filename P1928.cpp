#include<iostream>
#include<string>
using namespace std;
string ex()
{
    string s,x;
    int i;
    char c;
    while(cin>>c)
    {
        if(c=='[')
        {
            cin>>i;
            x=ex();
            while(i--) s+=x;
        }
        else if(c==']')
        {
            return s;
        }
        else
        {
            s+=c;
        }
    }
    return s;
   
}
int main()
{
    cout<<ex();
    return 0;
} 