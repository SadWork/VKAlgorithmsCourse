#include "zero_one_sort.h" // Подключаем заголовочный файл с вашей функцией merge
#include <gtest/gtest.h>

TEST(ZeroOneSortTest, SortsZerosToFront)
{
    std::vector<int> arr = {1, 0, 1, 0, 1, 0};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);

    // Проверяем, что все нули перемещены в начало
    EXPECT_TRUE(std::all_of(arr.begin(), arr.begin() + 3, [](int x)
                            { return x == 0; }));
    EXPECT_TRUE(std::all_of(arr.begin() + 3, arr.end(), [](int x)
                            { return x == 1; }));
}

TEST(ZeroOneSortTest, HandlesOnlyZeros)
{
    std::vector<int> arr = {0, 0, 0, 0};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);

    // Все элементы должны быть нулями
    EXPECT_TRUE(std::all_of(arr.begin(), arr.end(), [](int x)
                            { return x == 0; }));
}

TEST(ZeroOneSortTest, HandlesOnlyOnes)
{
    std::vector<int> arr = {1, 1, 1, 1};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);

    // Все элементы должны быть единицами
    EXPECT_TRUE(std::all_of(arr.begin(), arr.end(), [](int x)
                            { return x == 1; }));
}

TEST(ZeroOneSortTest, HandlesEmptyArray)
{
    std::vector<int> arr = {};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);

    // Массив остается пустым
    EXPECT_TRUE(arr.empty());
}

TEST(ZeroOneSortTest, HandlesSingleElementArray)
{
    std::vector<int> arr = {1};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);
    EXPECT_EQ(arr, std::vector<int>({1}));

    arr = {0};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);
    EXPECT_EQ(arr, std::vector<int>({0}));
}

TEST(ZeroOneSortTest, HandlesUnsortedInput)
{
    std::vector<int> arr = {1, 0, 1, 1, 0};
    zero_one_sort(arr.begin(), arr.end(), isZero<int>);

    // Проверяем, что все нули перемещены в начало
    EXPECT_TRUE(std::all_of(arr.begin(), arr.begin() + 2, [](int x)
                            { return x == 0; }));
    EXPECT_TRUE(std::all_of(arr.begin() + 2, arr.end(), [](int x)
                            { return x == 1; }));
}

TEST(ZeroOneSortTest, HandlesEvenTask)
{
    std::vector<int> arr = {3, 2, 4, 1, 11, 8, 9};
    zero_one_sort(arr.begin(), arr.end(), isEven<int>);

    // Проверяем, что все нули перемещены в начало
    EXPECT_EQ(arr, std::vector<int>({2, 4, 8, 1, 11, 3, 9}));
}

TEST(ZeroOneSortTest, HandlesZeroInTheEnd)
{
    std::vector<int> arr = {0, 0, 1, 0, 3, 12};
    zero_one_sort(arr.begin(), arr.end(), [](int x)
                  { return !isZero(x); });

    // Проверяем, что все нули перемещены в начало
    EXPECT_EQ(arr, std::vector<int>({1, 3, 12, 0, 0, 0}));
}