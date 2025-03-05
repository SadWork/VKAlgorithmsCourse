#pragma once
#include <bits/stdc++.h>
using namespace std;

template <typename T>
auto merge(const vector<T> &a, const vector<T> &b) -> vector<T>
{
    vector<T> c(a.size() + b.size());
    int ai{0}, bi{0}, ci{0};
    while (ai < a.size() && bi < b.size())
    {
        if (a[ai] < b[bi])
        {
            c[ci++] = a[ai++];
        }
        else
        {
            c[ci++] = b[bi++];
        }
    }
    while (ai < a.size())
    {
        c[ci++] = a[ai++];
    }
    while (bi < b.size())
    {
        c[ci++] = b[bi++];
    }
    return c;
}