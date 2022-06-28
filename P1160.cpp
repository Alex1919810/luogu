#include <iostream>
using namespace std;
int n,m;
int xx,p;
struct d{
    int left;
    int right;
}a[100010];
int yy;
int v[100010];
int main(){
    cin>>n;
    a[1].left=0;
    a[1].right=100010;
    a[0].right=1;
    for(int i=2;i<=n;i++){
        cin>>xx>>p;
        if(p==0)
        {
        a[i].left=a[xx].left,a[i].right=xx;
        a[a[xx].left].right=i;
        a[xx].left=i;
        }
        if(p==1)
        {
        a[i].right=a[xx].right,a[i].left=xx;
        a[a[xx].right].left=i;
        a[xx].right=i;
        }
    }
    int bib=0;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>xx;
        if(!v[xx]){
        int s=a[xx].left;
        int b=a[xx].right;
        a[s].right=b;
        a[b].left=s;
        v[xx]=true;
        }
    }
    bib=0;
    v[0]=true;
    for(int i=1;i<=n;i++){
        bib=a[bib].right;
        if(bib!=100010)cout<<bib<<" ";
        else break;
    }
    return 0;
} 