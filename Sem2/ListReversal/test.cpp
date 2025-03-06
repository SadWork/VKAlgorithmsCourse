#include <gtest/gtest.h>
#include "../lib/SinglyLinkedList.h"

TEST(ListReverseTest, EmptyList)
{
    SinglyLinkedList<int> list;
    list.reverse();
    std::vector<int> result;
    for (const auto &value : list)
    {
        result.push_back(value);
    }
    EXPECT_TRUE(result.empty());
}

TEST(ListReverseTest, SingleElement)
{
    SinglyLinkedList<int> list;
    list.push_back(42);
    list.reverse();
    std::vector<int> result;
    for (const auto &value : list)
    {
        result.push_back(value);
    }
    std::vector<int> expected = {42};
    EXPECT_EQ(result, expected);
}

TEST(ListReverseTest, MultipleElements)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.reverse();
    std::vector<int> result;
    for (const auto &value : list)
    {
        result.push_back(value);
    }
    std::vector<int> expected = {5, 4, 3, 2, 1};
    EXPECT_EQ(result, expected);
}
