#include "swap_parts.h"

int main()
{
    int k;
    cin >> k;
    vector<int> a;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(a));
    swap_parts(a, k);
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
}