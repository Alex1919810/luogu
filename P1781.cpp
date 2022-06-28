#include<iostream>
using namespace std;
int main()
{
    int n;
    int max=0,t,m;
    string str1=" ";
    string str2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>str2;
        t=str2.length();
        if(t>max || (t==max && str2>str1))
        {
            str1=str2;
            max=t;
            m=i;
        }
    }
    cout<<m<<endl<<str1<<endl;
}