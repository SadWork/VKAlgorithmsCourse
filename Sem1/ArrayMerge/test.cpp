#include "merge.h"
#include <gtest/gtest.h>

TEST(MergeTest, MergesTwoSortedVectors)
{
    std::vector<int> a = {1, 3, 5};
    std::vector<int> b = {2, 4, 6};
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};

    auto result = merge(a, b);

    EXPECT_EQ(result, expected);
}

TEST(MergeTest, MergesEmptyVector)
{
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {};
    std::vector<int> expected = {1, 2, 3};

    auto result = merge(a, b);

    EXPECT_EQ(result, expected);
}

TEST(MergeTest, MergesEmptyVectors)
{
    std::vector<int> a = {};
    std::vector<int> b = {};
    std::vector<int> expected = {};

    auto result = merge(a, b);

    EXPECT_EQ(result, expected);
}

TEST(MergeTest, MergesWithNegativeNumbers)
{
    std::vector<int> a = {-5, -3, -1};
    std::vector<int> b = {-4, -2, 0};
    std::vector<int> expected = {-5, -4, -3, -2, -1, 0};

    auto result = merge(a, b);

    EXPECT_EQ(result, expected);
}

TEST(MergeTest, MergesVectorsWithOneElementEach)
{
    std::vector<int> a = {1};
    std::vector<int> b = {2};
    std::vector<int> expected = {1, 2};

    auto result = merge(a, b);

    EXPECT_EQ(result, expected);
}

TEST(MergeTest, MergesVectorsWithIdenticalElements)
{
    std::vector<int> a = {1, 1, 1};
    std::vector<int> b = {1, 1, 1};
    std::vector<int> expected = {1, 1, 1, 1, 1, 1};

    auto result = merge(a, b);

    EXPECT_EQ(result, expected);
}
