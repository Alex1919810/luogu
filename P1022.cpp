#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000],b;
    int sum=0,m=0;
    float d;    
    int c=0,f=-1,t=1,k,i;
    scanf("%s",a);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c=c*10+(a[i]-'0');
        }
        else if(a[i]=='-')
        {
            sum=sum+c*t*f;
            c=0;
            t=-1;
        }
        else if(a[i]=='+')
        {
            sum=sum+c*t*f;
            c=0;
            t=1;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            if(i==0)
            {
                m=m+(1*t*-f);
                c=0;
                b=a[i]; 
            }
            else
            {
                m=m+(c*t*-f);
                c=0;
                b=a[i];
            }
        }
        else if(a[i]=='=')
        {
            sum=sum+c*t*f;
            c=0;
            t=1;
            f=1;
        }
    }
    sum=sum+c*t*f;
    d=(sum*1.000)/(m*1.000);
    printf("%c=%.3f",b,d);
    return 0;
}