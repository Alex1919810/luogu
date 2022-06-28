#include<iostream>
using namespace std;

void dg(string a,string b){
    if(a.size()){
        char c=b[b.size()-1];
        cout<<c;
        b.erase(b.end()-1);
        int k=a.find(c);
        dg(a.substr(0,k),b.substr(0,k));
        dg(a.substr(k+1),b.substr(k));
    }
}

int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    dg(x,y);
}