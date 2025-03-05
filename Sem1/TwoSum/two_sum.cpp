#include "two_sum.h"
auto two_sum(vector<int> &a, int sum) -> pair<int, int>
{
    static constexpr pair<int, int> NEUTRAL_{-1, -1};

    int left = 0, right = a.size() - 1;
    while (left < right)
    {
        int cur = a[left] + a[right];
        if (cur > sum)
        {
            --right;
        }
        else if (cur < sum)
        {
            ++left;
        }
        else
        {
            break;
        }
    }

    return ((left != right) and (a[left] + a[right] == sum)) ? pair<int, int>{left, right} : NEUTRAL_;
}