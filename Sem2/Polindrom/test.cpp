#include <gtest/gtest.h>
#include "polindrom_check.h"

TEST(PolindromCheckTest, EmptyString)
{
    EXPECT_TRUE(polindrom_check(""));
}

TEST(PolindromCheckTest, SingleCharacter)
{
    EXPECT_TRUE(polindrom_check("a"));
}

TEST(PolindromCheckTest, TwoSameCharacters)
{
    EXPECT_TRUE(polindrom_check("aa"));
}

TEST(PolindromCheckTest, TwoDifferentCharacters)
{
    EXPECT_FALSE(polindrom_check("ab"));
}

TEST(PolindromCheckTest, SimplePalindrome)
{
    EXPECT_TRUE(polindrom_check("aba"));
    EXPECT_TRUE(polindrom_check("racecar"));
}

TEST(PolindromCheckTest, NotPalindrome)
{
    EXPECT_FALSE(polindrom_check("hello"));
    EXPECT_FALSE(polindrom_check("abcd"));
}

TEST(PolindromCheckTest, PalindromeWithEvenLength)
{
    EXPECT_TRUE(polindrom_check("abba"));
    EXPECT_TRUE(polindrom_check("deed"));
}

TEST(PolindromCheckTest, LongPalindrome)
{
    EXPECT_TRUE(polindrom_check("abcdedcba"));
    EXPECT_TRUE(polindrom_check("amanaplanacanalpanama"));
}

TEST(PolindromCheckTest, LongNonPalindrome)
{
    EXPECT_FALSE(polindrom_check("abcdefghij"));
}
