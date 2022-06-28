#include<iostream>
using namespace std;
int main()
{
    double k,n=0,sum=0;
    cin>>k;
    while(sum<=k)
    {
        n++;
        sum+=1/n;
    }
    cout<<n<<endl;
    return 0;
}