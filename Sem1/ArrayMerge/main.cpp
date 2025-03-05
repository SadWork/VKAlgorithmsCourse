#include "merge.h"

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    auto c = merge(a, b);
    for (auto &i : c)
    {
        cout << i << ' ';
    }
}