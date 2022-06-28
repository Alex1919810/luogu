#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct node
{
    string name;
    string p1;
    string p2;
    int sc1;
    int sc2;
    int num;
    int sum;
} a[300];

int js(node x)
{
    if (x.sc1 > 80 && x.num >= 1)
        x.sum += 8000;
    if (x.sc1 > 85 && x.sc2 > 80)
        x.sum += 4000;
    if (x.sc1 > 90)
        x.sum += 2000;
    if (x.sc1 > 85 && x.p2 == "Y")
        x.sum += 1000;
    if (x.sc2 > 80 && x.p1 == "Y")
        x.sum += 850;
    return x.sum;
}

int main()
{
    int ans = 0, n, maxn, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].sc1 >> a[i].sc2 >> a[i].p1 >> a[i].p2 >> a[i].num;
        a[i].sum = js(a[i]);
        if (a[i].sum > max)
        {
            maxn = i;
            max = a[i].sum;
        }
        ans += a[i].sum;
    }
    cout << a[maxn].name << endl <<a[maxn].sum <<endl << ans;
}
