#include <gtest/gtest.h>
#include "string_base_check.h" 

TEST(StringBaseCheckTest, BothEmpty) {
    EXPECT_TRUE(string_base_check("", ""));
}

TEST(StringBaseCheckTest, TempEmpty) {
    EXPECT_TRUE(string_base_check("abcdef", ""));
}

TEST(StringBaseCheckTest, SourceEmptyTempNotEmpty) {
    EXPECT_FALSE(string_base_check("", "abc"));
}

TEST(StringBaseCheckTest, ExactMatch) {
    EXPECT_TRUE(string_base_check("hello", "hello"));
}

TEST(StringBaseCheckTest, ValidSubsequence) {
    // "ace" — подпоследовательность "abcdef"
    EXPECT_TRUE(string_base_check("abcdef", "ace"));
}

TEST(StringBaseCheckTest, InvalidSubsequenceDueToOrder) {
    // "aec" нельзя получить, так как 'e' идёт после 'c' в source
    EXPECT_FALSE(string_base_check("abcdef", "aec"));
}

TEST(StringBaseCheckTest, NotSubsequenceBecauseOfMissingCharacters) {
    // "abd" нельзя получить из "abc", потому что 'd' отсутствует
    EXPECT_FALSE(string_base_check("abc", "abd"));
}

TEST(StringBaseCheckTest, SubsequenceWithRepeatingCharacters) {
    // "abb" можно получить из "aabbcc"
    EXPECT_TRUE(string_base_check("aabbcc", "abb"));
}

TEST(StringBaseCheckTest, TempLongerThanSource) {
    EXPECT_FALSE(string_base_check("abc", "abcd"));
}

TEST(StringBaseCheckTest, InvalidSubsequenceDueToInsufficientRepeats) {
    // "aab" нельзя получить из "abc", так как в source только одна 'a'
    EXPECT_FALSE(string_base_check("abc", "aab"));
}
