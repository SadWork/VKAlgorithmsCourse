#include "sort_colors.h"
#include <gtest/gtest.h>

TEST(SortColorsTest, SortsZeroOneTwo)
{
    std::vector<int> arr = {1, 0, 2, 1, 0, 2, 1, 0, 2};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(SortColorsTest, HandlesOnlyZeros)
{
    std::vector<int> arr = {0, 0, 0, 0};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(SortColorsTest, HandlesOnlyOnes)
{
    std::vector<int> arr = {1, 1, 1, 1};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(SortColorsTest, HandlesOnlyTwos)
{
    std::vector<int> arr = {2, 2, 2, 2};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(SortColorsTest, HandlesEmptyArray)
{
    std::vector<int> arr = {};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(arr.empty());
}

TEST(SortColorsTest, HandlesSingleElementArray)
{
    std::vector<int> arr = {1};
    sort_colors(arr.begin(), arr.end());
    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));

    arr = {0};
    sort_colors(arr.begin(), arr.end());
    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));

    arr = {2};
    sort_colors(arr.begin(), arr.end());
    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(SortColorsTest, HandlesUnsortedInput)
{
    std::vector<int> arr = {2, 0, 1, 2, 1, 0};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(SortColorsTest, HandlesLargeArray)
{
    std::vector<int> arr = {1, 0, 2, 1, 2, 0, 1, 0, 2, 1, 0, 2};
    sort_colors(arr.begin(), arr.end());

    EXPECT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}