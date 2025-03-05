#include "array_reversal.h"

int main()
{
    vector<int> a;
    int cur;
    while (cin >> cur)
    {
        a.push_back(cur);
    }
    array_reversal(a);
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
}