#pragma once
#include <bits/stdc++.h>
using namespace std;

auto string_base_check(const string &source, const string &temp) -> bool
{
    size_t i{0}, j{0};
    while (i < source.size() && j < temp.size())
    {
        if (source[i] == temp[j])
        {
            ++i, ++j;
        }
        else
        {
            ++i;
        }
    }
    return j == temp.size();
}