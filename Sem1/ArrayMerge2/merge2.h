#pragma once
#include <bits/stdc++.h>
using namespace std;

template <typename T>
auto merge2(vector<T> &a, const vector<T> &b) -> void
{
    int ai{a.size() - b.size() - 1}, bi{b.size() - 1}, ci{a.size() - 1};
    while (bi >= 0 && ai >= 0)
    {
        if (a[ai] >= b[bi])
        {
            a[ci--] = a[ai--];
        }
        else
        {
            a[ci--] = b[bi--];
        }
    }
    while (bi >= 0)
    {
        a[ci--] = b[bi--];
    }
}