#pragma once
#include <bits/stdc++.h>
#include "../ArrayReversal/array_reversal.h"
using namespace std;

template <typename T, typename Integer>
auto swap_parts(vector<T> &a, Integer k) -> void
{
    k %= a.size();
    array_reversal(a);
    array_reversal(a, 0, k);
    array_reversal(a, k, a.size());
}