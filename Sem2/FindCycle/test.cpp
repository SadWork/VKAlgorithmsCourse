#include <gtest/gtest.h>
#include "../lib/SinglyLinkedList.h"
#include "find_cycle.h"

TEST(FindCycleTest, NoCycle)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    EXPECT_FALSE(find_cycle(list.begin(), list.end()));
}

TEST(FindCycleTest, Circle)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.create_cycle(1);
    EXPECT_TRUE(find_cycle(list.begin(), list.end()));
    list.break_cycle();
}

TEST(FindCycleTest, CycleInTheMid)
{
    SinglyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.create_cycle(3);
    EXPECT_TRUE(find_cycle(list.begin(), list.end()));
    list.break_cycle();
}