#include<iostream>
#include<algorithm>
using namespace std;
double a,b,c,d;
double l,r;
int sum;
double js(double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
int main()
{
    cin>>a>>b>>c>>d;
    for(int i=-100;i<100;i++)
    {
        l=i;
        r=i+1;
        double p1=js(l);
        double p2=js(r);
        if(!p1)
        {
            printf("%.2lf ",l);
            sum++;
        }
        if(p1*p2<0)
        {
            while(r-l>=0.001)
            {
                double mid=(l+r)/2;
                if(js(mid)*js(r)<=0)
                    l=mid;
                else
                    r=mid;
            }
            printf("%.2lf ",r);
            sum++;
        }
        if(sum==3) return 0;
    }
}