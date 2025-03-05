#include "sort_colors.h"

bool check(int x)
{
    return x == 0;
}

int main()
{
    vector<int> a;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(a));
    sort_colors(a.begin(), a.end());
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
}