// SinglyLinkedList.h
#pragma once
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class SinglyLinkedList
{
public:
    struct Node
    {
        T value;
        Node *next;
        Node(const T &val) : value(val), next(nullptr) {}
    };

    class iterator
    {
    public:
        using iterator_category = forward_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = T *;
        using reference = T &;

        iterator(Node *node) : node_(node) {}
        iterator &operator++()
        {
            if (node_)
                node_ = node_->next;
            return *this;
        }
        iterator operator++(int)
        {
            iterator tmp = *this;
            ++(*this);
            return tmp;
        }
        iterator operator+(difference_type n) const
        {
            iterator tmp = *this;
            for (difference_type i = 0; i < n && tmp.node_ != nullptr; ++i)
            {
                tmp.node_ = tmp.node_->next;
            }
            return tmp;
        }
        bool operator==(const iterator &other) const { return node_ == other.node_; }
        bool operator!=(const iterator &other) const { return node_ != other.node_; }
        T &operator*() const { return node_->value; }

    private:
        Node *node_;
    };

    SinglyLinkedList() : head_(nullptr), tail_(nullptr) {}

    ~SinglyLinkedList()
    {
        break_cycle();
        Node *current = head_;
        while (current)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
    }

    void push_back(const T &value)
    {
        Node *newNode = new Node(value);
        if (!head_)
        {
            head_ = newNode;
            tail_ = newNode;
        }
        else
        {
            tail_->next = newNode;
            tail_ = newNode;
        }
    }

    // Создаёт цикл, связывая последний элемент со списком начиная с позиции pos (0-indexed)
    void create_cycle(size_t pos)
    {
        Node *target = head_;
        for (size_t i = 0; i < pos && target; ++i)
            target = target->next;
        if (target && tail_)
            tail_->next = target;
    }

    // Разрывает цикл, если он есть
    void break_cycle()
    {
        if (tail_)
            tail_->next = nullptr;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *cur = head_;

        while (cur != nullptr)
        {
            Node *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        tail_ = head_;
        head_ = prev;
    }

    iterator mid()
    {
        iterator slow{begin()}, fast{slow};
        while (fast != end() and ++fast != end())
        {
            ++slow;
            ++fast;
        }
        return slow;
    }

    iterator begin() { return iterator(head_); }
    iterator end() { return iterator(nullptr); }

private:
    Node *head_;
    Node *tail_;
};
