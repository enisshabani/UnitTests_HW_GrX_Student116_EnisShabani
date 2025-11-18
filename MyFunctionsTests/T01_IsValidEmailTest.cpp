#include <gtest/gtest.h>
#include "../MyFunctions/T01_IsValidEmail.h"

TEST(T01_IsValidEmail, ValidEmail)
{
    EXPECT_TRUE(IsValidEmail("test@example.com"));
}

TEST(T01_IsValidEmail, MissingAtSymbol)
{
    EXPECT_FALSE(IsValidEmail("testexample.com"));
}

TEST(T01_IsValidEmail, MissingDot)
{
    EXPECT_FALSE(IsValidEmail("test@examplecom"));
}

TEST(T01_IsValidEmail, ShortDomain)
{
    EXPECT_FALSE(IsValidEmail("a@b.c"));
}
