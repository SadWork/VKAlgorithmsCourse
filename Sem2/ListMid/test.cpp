#include <gtest/gtest.h>
#include "../lib/SinglyLinkedList.h"

TEST(ListMidTest, EmptyList)
{
    SinglyLinkedList<int> list;
    auto midIt = list.mid();
    EXPECT_EQ(midIt, list.end());
}

TEST(ListMidTest, SingleElement)
{
    SinglyLinkedList<int> list;
    list.push_back(100);
    auto midIt = list.mid();
    EXPECT_NE(midIt, list.end());
    EXPECT_EQ(*midIt, 100);
}

TEST(ListMidTest, OddNumberOfElements)
{
    SinglyLinkedList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);
    auto midIt = list.mid();
    EXPECT_EQ(*midIt, 30);
}

TEST(ListMidTest, EvenNumberOfElements)
{
    SinglyLinkedList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    auto midIt = list.mid();
    EXPECT_EQ(*midIt, 30);
}
