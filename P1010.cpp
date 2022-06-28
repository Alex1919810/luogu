#include<iostream>
using namespace std;
long long n;
void find(long long x)
{
    if(n!=0)
    {
        long long p=1,q=0;
        cout<<"2";
        while(x>=p)
        {
            q++;
            p*=2;
        }
        q--;
        if(q==0||q==2) cout<<"("<<q<<")";
        if(q>=3)
		{
			cout<<"("; 
			find(q);
			cout<<")";
		}
        x-=p/2;
        if(x)
        {
            cout<<"+";
            find(x);
        }
    }

}

int main()
{

    cin>>n;
    find(n);
}