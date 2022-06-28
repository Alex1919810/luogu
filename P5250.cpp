#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

set<int>s;
set<int>::iterator c,d,e;
int n;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1){
            if(s.count(b)) cout<<"Already Exist"<<endl;
            else s.insert(b);
        }
        else{
            if(s.empty()){
                cout<<"Empty"<<endl;
                continue;
            }
            if(s.count(b)) {
                cout<<b<<endl;
                s.erase(b);
            }
            else{
                c=d=e=s.lower_bound(b);
                if(c==s.begin()) 
                {
                    cout<<*c<<endl;
                    s.erase(c);
                }
                else if(c==s.end())
                {
                    cout<<*(--d)<<endl;
                    s.erase(d);
                }
                else if(*c-b < b-*(--e)){
                    cout<<*d<<endl;
                    s.erase(d);
                }
                else {
                    cout<<*(--c)<<endl;
                    s.erase(c);
                }
            }
        }
    }
}