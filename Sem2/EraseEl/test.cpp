#include "../lib/SinglyLinkedList.h"
#include <gtest/gtest.h>

TEST(ListEraseTest, EraseFromEmptyList)
{
    SinglyLinkedList<int> list;
    int erased = list.erase(42);
    EXPECT_EQ(erased, 0);

    vector<int> result;
    for (int x : list)
    {
        result.push_back(x);
    }
    EXPECT_TRUE(result.empty());
}

TEST(ListEraseTest, EraseNonExistentValue)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    int erased = list.erase(42);
    EXPECT_EQ(erased, 0);

    vector<int> result;
    for (int x : list)
    {
        result.push_back(x);
    }
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);
}

TEST(ListEraseTest, EraseSingleOccurrence)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    int erased = list.erase(2);
    EXPECT_EQ(erased, 1);

    vector<int> result;
    for (int x : list)
    {
        result.push_back(x);
    }
    vector<int> expected = {1, 3};
    EXPECT_EQ(result, expected);
}

TEST(ListEraseTest, EraseMultipleOccurrences)
{
    SinglyLinkedList<int> list;
    list.push_back(2);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(2);
    int erased = list.erase(2);
    EXPECT_EQ(erased, 3);

    vector<int> result;
    for (int x : list)
    {
        result.push_back(x);
    }
    vector<int> expected = {1, 3};
    EXPECT_EQ(result, expected);
}

TEST(ListEraseTest, EraseHeadElement)
{
    SinglyLinkedList<int> list;
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    int erased = list.erase(2);
    EXPECT_EQ(erased, 1);

    vector<int> result;
    for (int x : list)
    {
        result.push_back(x);
    }
    vector<int> expected = {3, 4};
    EXPECT_EQ(result, expected);
}

TEST(ListEraseTest, EraseTailElement)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    int erased = list.erase(3);
    EXPECT_EQ(erased, 1);

    vector<int> result;
    for (int x : list)
    {
        result.push_back(x);
    }
    vector<int> expected = {1, 2};
    EXPECT_EQ(result, expected);
}
