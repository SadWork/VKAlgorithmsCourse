#include "two_sum.h"
#include <gtest/gtest.h>

TEST(TwoSumTest, FindsCorrectPair)
{
    std::vector<int> nums = {1, 2, 3, 4, 6};
    int target = 6;
    auto ans = two_sum(nums, target);
    EXPECT_TRUE(nums.at(ans.first) + nums.at(ans.second) == target and ans.first != ans.second);
}

TEST(TwoSumTest, HandlesNegativeNumbers)
{
    std::vector<int> nums = {-4, -2, 1, 3, 5};
    int target = 1;
    auto ans = two_sum(nums, target);
    EXPECT_TRUE(nums.at(ans.first) + nums.at(ans.second) == target and ans.first != ans.second);
}

TEST(TwoSumTest, ReturnsNeutralForNoSolution)
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 10;
    EXPECT_EQ(two_sum(nums, target), std::make_pair(-1, -1));
}

TEST(TwoSumTest, HandlesMinimumInput)
{
    std::vector<int> nums = {1, 2};
    int target = 3;
    auto ans = two_sum(nums, target);
    EXPECT_TRUE(nums.at(ans.first) + nums.at(ans.second) == target and ans.first != ans.second);
}

TEST(TwoSumTest, HandlesDuplicateNumbers)
{
    std::vector<int> nums = {1, 1, 3, 4, 5};
    int target = 2;
    auto ans = two_sum(nums, target);
    EXPECT_TRUE(nums.at(ans.first) + nums.at(ans.second) == target and ans.first != ans.second);
}