#pragma once
#include <bits/stdc++.h>
using namespace std;

auto find_cycle(auto begin, auto end) -> bool
{
    auto fast{begin + 1};
    while (begin != fast)
    {
        if (fast == end or ++fast == end)
        {
            return false;
        }
        ++begin, ++fast;
    }
    return true;
}