#pragma once
#include <bits/stdc++.h>
using namespace std;

template <typename T>
auto array_reversal(vector<T> &a, int left, int right) -> void
{
    while (left < right)
    {
        swap(a[left++], a[--right]);
    }
}

template <typename T>
auto array_reversal(vector<T> &a) -> void
{
    array_reversal(a, 0, a.size());
}