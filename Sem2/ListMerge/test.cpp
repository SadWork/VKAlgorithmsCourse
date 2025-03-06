#include <gtest/gtest.h>
#include "../lib/SinglyLinkedList.h"
#include "list_merge.h"

TEST(ListMergeTest, MergeTwoSortedLists)
{
    SinglyLinkedList<int> a, b;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);

    b.push_back(2);
    b.push_back(4);
    b.push_back(6);

    list_merge(a, b);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    auto it = a.begin();
    for (int val : expected)
    {
        ASSERT_NE(it, a.end());
        EXPECT_EQ(*it, val);
        ++it;
    }
    EXPECT_EQ(it, a.end());
    EXPECT_EQ(b.begin(), b.end()); // b должен быть пустым
}

TEST(ListMergeTest, MergeWithEmptyList)
{
    SinglyLinkedList<int> a, b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    list_merge(a, b);

    std::vector<int> expected = {1, 2, 3};
    auto it = a.begin();
    for (int val : expected)
    {
        ASSERT_NE(it, a.end());
        EXPECT_EQ(*it, val);
        ++it;
    }
    EXPECT_EQ(it, a.end());
    EXPECT_EQ(b.begin(), b.end()); // b должен быть пустым
}

TEST(ListMergeTest, MergeTwoEmptyLists)
{
    SinglyLinkedList<int> a, b;
    list_merge(a, b);
    EXPECT_EQ(a.begin(), a.end()); // a должен быть пустым
    EXPECT_EQ(b.begin(), b.end()); // b должен быть пустым
}

TEST(ListMergeTest, MergeWithOneElementLists)
{
    SinglyLinkedList<int> a, b;
    a.push_back(2);
    b.push_back(1);

    list_merge(a, b);

    std::vector<int> expected = {1, 2};
    auto it = a.begin();
    for (int val : expected)
    {
        ASSERT_NE(it, a.end());
        EXPECT_EQ(*it, val);
        ++it;
    }
    EXPECT_EQ(it, a.end());
    EXPECT_EQ(b.begin(), b.end()); // b должен быть пустым
}
