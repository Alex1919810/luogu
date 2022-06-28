#include<bits/stdc++.h>
using namespace std;
char a[300];
int main()
{
    int i,t,sum1=0,sum2=0;
    scanf("%s",a);
    t=strlen(a);
    for(i=0;i<t;i++)
    {
        switch(a[i])
        {
            case '.':break;
            case 'b':
                    sum1++;
                    if(a[i+1]=='o')i++;
                    if(a[i+1]=='y')i++;
                    break;
            case 'o':
                    sum1++;
                    if(a[i+1]=='y')i++;
                    break;
            case 'y':
                    sum1++;
                    break;
            case 'g':
                    sum2++;
                    if(a[i+1]=='i')i++;
                    if(a[i+1]=='r')i++;
                    if(a[i+1]=='l')i++;
                    break;
            case 'i':
                    sum2++;
                    if(a[i+1]=='r')i++;
                    if(a[i+1]=='l')i++;
                    break;
            case 'r':
                    sum2++;
                    if(a[i+1]=='l')i++;
                    break;
            case 'l':
                    sum2++;
                    break;
        }
    }
    cout<<sum1<<endl<<sum2;
}