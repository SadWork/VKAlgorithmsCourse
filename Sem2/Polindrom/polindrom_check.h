#pragma once
#include <bits/stdc++.h>
using namespace std;

auto polindrom_check(const string &source) -> bool
{
    auto i{source.begin()}, j{--source.end()};
    while (*i == *j)
    {
        ++i, --j;
    }
    return i >= j;
}