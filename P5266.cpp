#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

unordered_map<string,long long>stu;

long long n;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long a;
        string b;
        cin>>a;
        if(a==1)
        {   
            long long c;
            cin>>b>>c;
            stu[b]=c;
            cout<<"OK"<<endl;
        }
        else if(a==2)
        {
            cin>>b;
            if(stu.find(b)!=stu.end())
                cout<<stu[b]<<endl;
            else cout<<"Not found"<<endl;
        }
        else if(a==3)
        {
            cin>>b;
            if(stu.find(b)!=stu.end())
            {
                stu.erase(b);
                cout<<"Deleted successfully"<<endl;
            }
            else cout<<"Not found"<<endl;
        }
        else if(a==4){
            cout<<stu.size()<<endl;
        }
    }
}