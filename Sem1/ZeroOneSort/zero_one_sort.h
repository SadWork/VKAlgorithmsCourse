#pragma once
#include <bits/stdc++.h>
using namespace std;

template <typename Number>
auto isZero(const Number &a)
{
    return a == 0;
}

template <typename Number>
auto isEven(const Number &a)
{
    return a % 2 == 0;
}

template <typename Function>
auto zero_one_sort(auto begin, auto end, Function check) -> void
{
    auto even_iter = begin;
    while (begin < end)
    {
        if (check(*begin))
        {
            swap(*begin, *(even_iter++));
        }
        ++begin;
    }
}