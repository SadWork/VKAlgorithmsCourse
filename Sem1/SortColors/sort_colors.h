#pragma once
#include <bits/stdc++.h>
using namespace std;

auto sort_colors(auto begin, auto end) -> void
{
    auto mid{begin};
    while (mid < end)
    {
        if (*mid == 0)
        {
            swap(*(mid++), *(begin++));
        }
        else if (*mid == 1)
        {
            ++mid;
        }
        else
        {
            swap(*mid, *(--end));
        }
    }
}