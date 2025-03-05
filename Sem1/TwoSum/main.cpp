#include "two_sum.h"

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    cout << two_sum(a, s).first << " " << two_sum(a, s).second;
}