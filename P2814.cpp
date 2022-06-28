#include<iostream>
#include<map>
using namespace std;
map<string,string>G;
string fa,son;

string findn(string s)
{
    if(G[s]!=s) return G[s]=findn(G[s]);
    else return s;
}
int main()
{
    while(1)
    {
        char cr;
        cin>>cr;
        if(cr=='$') return 0;
        if(cr=='#')
        {
            cin>>fa;
            if(G[fa]=="") G[fa]=fa;

        }
        else if(cr=='+')
        {
            cin>>son;
            G[son]=fa;
        }
        else{
            string s;
            cin>>s;
            cout<<s<<" "<<findn(s)<<endl;
        }
    }

}