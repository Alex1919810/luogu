#include<bits/stdc++.h>
using namespace std;
int a[200]={0};
int main ()
{
    int n,i=0,t,l;
    cin>>n;
    t=n;
    cin>>a[i];
    if(a[i]==1)
    {
        cout<<"x^"<<t;
    }
    else if(a[i]==-1)
    {
        cout<<"-"<<"x^"<<t;
    }
    else if(a[i]!=0)
    {
        cout<<a[i]<<"x^"<<t;
    }
    t--;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==n)
        {
            if(a[i]<0)
            {
                cout<<a[i];
            }
            else if(a[i]>0)
            {
            cout<<"+"<<a[i];
            }
        }
        else if(a[i]==0)
        {
            t--;
            continue;
        }
        else if(a[i]==1 && t==1)
        {
            cout<<"+"<<"x";
            t--;
        }
        else if(a[i]==-1 && t==1)
        {
            cout<<"-"<<"x";
            t--;
        }
        else if(a[i]>0 && t==1)
        {
            cout<<"+"<<a[i]<<"x";
            t--;
        }
        else if(a[i]<0 && t==1)
        {
            cout<<a[i]<<"x";
            t--;
        }
        else if(a[i]==1)
        {
            cout<<"+"<<"x^"<<t;
            t--;
        }
        else if(a[i]==-1)
        {
            cout<<"-"<<"x^"<<t;
            t--;
        }
        else if(a[i]>0)
        {
            cout<<"+"<<a[i]<<"x^"<<t;
            t--;
        }
        else if(a[i]<0)
        {
            cout<<a[i]<<"x^"<<t;
            t--;
        }
    }
}