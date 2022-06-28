#include<cstdio>
using namespace std;
int main()
{
    int n,i,x,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        t=t^x;
    }
    printf("%d",t);
    return 0;
}