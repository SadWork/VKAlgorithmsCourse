#include "merge2.h"
#include <gtest/gtest.h>

TEST(Merge2Test, MergesTwoSortedVectors)
{
    std::vector<int> a = {1, 3, 5, 0, 0, 0};
    std::vector<int> b = {2, 4, 6};
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, MergesEmptyVector)
{
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {};
    std::vector<int> expected = {1, 2, 3};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, MergesEmptyVectors)
{
    std::vector<int> a = {};
    std::vector<int> b = {};
    std::vector<int> expected = {};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, MergesWithNegativeNumbers)
{
    std::vector<int> a = {-5, -3, -1, 0, 0, 0};
    std::vector<int> b = {-4, -2, 0};
    std::vector<int> expected = {-5, -4, -3, -2, -1, 0};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, MergesVectorsWithOneElementEach)
{
    std::vector<int> a = {1, 0};
    std::vector<int> b = {2};
    std::vector<int> expected = {1, 2};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, MergesVectorsWithIdenticalElements)
{
    std::vector<int> a = {1, 1, 1, 0, 0, 0};
    std::vector<int> b = {1, 1, 1};
    std::vector<int> expected = {1, 1, 1, 1, 1, 1};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, MergesWithUnsortedInput)
{
    std::vector<int> a = {5, 7, 8, 0, 0, 0};
    std::vector<int> b = {1, 2, 3};
    std::vector<int> expected = {1, 2, 3, 5, 7, 8};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}

TEST(Merge2Test, HandlesSingleElementInB)
{
    std::vector<int> a = {1, 0};
    std::vector<int> b = {2};
    std::vector<int> expected = {1, 2};

    merge2(a, b);

    EXPECT_EQ(a, expected);
}