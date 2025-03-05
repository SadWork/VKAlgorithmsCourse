#include "swap_parts.h"

int main()
{
    int k;
    cin >> k;
    vector<int> a;
    int cur;
    while (cin >> cur)
    {
        a.push_back(cur);
    }
    swap_parts(a, k);
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
}