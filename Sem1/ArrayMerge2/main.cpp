#include "merge2.h"

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m), b(m);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    merge2(a, b);
    for (auto &i : a)
    {
        cout << i << ' ';
    }
}