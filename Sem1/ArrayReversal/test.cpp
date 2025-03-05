#include "array_reversal.h"
#include <gtest/gtest.h>

// Тест на пустой вектор
TEST(ArrayReversalTest, EmptyVector)
{
    vector<int> a;
    array_reversal(a);
    EXPECT_TRUE(a.empty());
}

// Тест на вектор из одного элемента
TEST(ArrayReversalTest, SingleElement)
{
    vector<int> a = {42};
    array_reversal(a);
    EXPECT_EQ(a, vector<int>({42}));
}

// Тест на вектор из двух элементов
TEST(ArrayReversalTest, TwoElements)
{
    vector<int> a = {1, 2};
    array_reversal(a);
    EXPECT_EQ(a, vector<int>({2, 1}));
}

// Тест на вектор из нечетного количества элементов
TEST(ArrayReversalTest, OddNumberOfElements)
{
    vector<int> a = {1, 2, 3, 4, 5};
    array_reversal(a);
    EXPECT_EQ(a, vector<int>({5, 4, 3, 2, 1}));
}

// Тест на вектор из четного количества элементов
TEST(ArrayReversalTest, EvenNumberOfElements)
{
    vector<int> a = {10, 20, 30, 40};
    array_reversal(a);
    EXPECT_EQ(a, vector<int>({40, 30, 20, 10}));
}

// Тест на вектор с повторяющимися значениями
TEST(ArrayReversalTest, Duplicates)
{
    vector<int> a = {7, 7, 7, 7, 7};
    array_reversal(a);
    EXPECT_EQ(a, vector<int>({7, 7, 7, 7, 7}));
}

// Тест на строковый вектор
TEST(ArrayReversalTest, StringVector)
{
    vector<string> a = {"apple", "banana", "cherry"};
    array_reversal(a);
    EXPECT_EQ(a, vector<string>({"cherry", "banana", "apple"}));
}

// Тест на вектор с отрицательными числами
TEST(ArrayReversalTest, NegativeNumbers)
{
    vector<int> a = {-1, -2, -3, -4, -5};
    array_reversal(a);
    EXPECT_EQ(a, vector<int>({-5, -4, -3, -2, -1}));
}

// Тест на вектор с дробными числами
TEST(ArrayReversalTest, FloatingPointNumbers)
{
    vector<double> a = {1.1, 2.2, 3.3, 4.4};
    array_reversal(a);
    EXPECT_EQ(a, vector<double>({4.4, 3.3, 2.2, 1.1}));
}