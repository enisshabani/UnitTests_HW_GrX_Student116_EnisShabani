#include <gtest/gtest.h>
#include "../MyFunctions/T05_IsStrongPassword.h"

TEST(T05_IsStrongPassword, ValidPassword)
{
    EXPECT_TRUE(IsStrongPassword("Abc123!@#"));
}

TEST(T05_IsStrongPassword, NoUppercase)
{
    EXPECT_FALSE(IsStrongPassword("abc123!@"));
}

TEST(T05_IsStrongPassword, NoDigit)
{
    EXPECT_FALSE(IsStrongPassword("Abcdef!@"));
}

TEST(T05_IsStrongPassword, NoSymbol)
{
    EXPECT_FALSE(IsStrongPassword("Abc12345"));
}

TEST(T05_IsStrongPassword, TooShort)
{
    EXPECT_FALSE(IsStrongPassword("Ab1!"));
}
