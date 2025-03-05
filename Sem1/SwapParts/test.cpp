#include <gtest/gtest.h>
#include "../SwapParts/swap_parts.h"

TEST(SwapPartsTest, FullRotation)
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    swap_parts(vec, 7);
    EXPECT_EQ(vec, (vector<int>{1, 2, 3, 4, 5, 6, 7}));
}

TEST(SwapPartsTest, PartialRotation)
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    swap_parts(vec, 3);
    EXPECT_EQ(vec, (vector<int>{5, 6, 7, 1, 2, 3, 4}));
}

TEST(SwapPartsTest, NoRotation)
{
    vector<int> vec = {1, 2, 3, 4};
    swap_parts(vec, 0);
    EXPECT_EQ(vec, (vector<int>{1, 2, 3, 4}));
}

TEST(SwapPartsTest, RotationGreaterThanSize)
{
    vector<int> vec = {1, 2, 3, 4, 5};
    swap_parts(vec, 7); // 7 % 5 = 2
    EXPECT_EQ(vec, (vector<int>{4, 5, 1, 2, 3}));
}

TEST(SwapPartsTest, SingleElement)
{
    vector<int> vec = {42};
    swap_parts(vec, 3);
    EXPECT_EQ(vec, (vector<int>{42}));
}

TEST(SwapPartsTest, EmptyVector)
{
    vector<int> vec = {};
    swap_parts(vec, 2);
    EXPECT_EQ(vec, (vector<int>{}));
}
