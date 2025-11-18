#include <gtest/gtest.h>
#include "../MyFunctions/T03_ContainsBadWords.h"

TEST(T03_ContainsBadWords, ContainsBad)
{
    EXPECT_TRUE(ContainsBadWords("This is bad"));
}

TEST(T03_ContainsBadWords, ContainsIdiot)
{
    EXPECT_TRUE(ContainsBadWords("He is an idiot"));
}

TEST(T03_ContainsBadWords, NoBadWords)
{
    EXPECT_FALSE(ContainsBadWords("Hello my friend"));
}
