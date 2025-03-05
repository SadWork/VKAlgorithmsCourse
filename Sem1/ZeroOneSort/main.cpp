#include "zero_one_sort.h"

bool check(int x)
{
    return x == 0;
}

int main()
{
    vector<int> a;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(a));
    zero_one_sort(a.begin(), a.end(), check);
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
}