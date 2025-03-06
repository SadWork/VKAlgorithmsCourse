#pragma once
#include <bits/stdc++.h>
#include "../lib/SinglyLinkedList.h"
using namespace std;

template <typename T>
auto list_merge(SinglyLinkedList<T> &a, SinglyLinkedList<T> &b) -> void
{
    using Node = typename SinglyLinkedList<T>::Node;
    Node *dummy = new Node(0);

    dummy->next = a.begin().get_node();

    Node *a_cur{dummy}, *b_cur{b.begin().get_node()};

    while (a_cur->next != nullptr && b_cur != nullptr)
    {
        if (a_cur->next->value > b_cur->value)
        {
            Node *a_temp{a_cur->next};
            Node *b_temp{b_cur->next};

            a_cur->next = b_cur;
            b_cur->next = a_temp;
            b_cur = b_temp;
        }
        a_cur = a_cur->next;
    }

    while (b_cur != nullptr)
    {
        a.push_back(b_cur->value);
        b_cur = b_cur->next;
    }

    a.set_head(dummy->next);
    b.set_head(nullptr);
    delete dummy;
}