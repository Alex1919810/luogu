#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    for (i = 0; N > i; i++)
    {
        N = N - i;
    }
    if (i % 2 == 0)
    {
        cout << N << "/" << i - N + 1 << endl;
    }
    else
    {
        cout << i - N + 1 << "/" << N << endl;
    }
    return 0;
}