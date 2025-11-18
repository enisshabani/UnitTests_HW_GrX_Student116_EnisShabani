#include <gtest/gtest.h>
#include "../MyFunctions/T02_CalculateShipping.h"

TEST(T02_CalculateShipping, ValidInput)
{
    EXPECT_FLOAT_EQ(CalculateShipping(10, 20), 10 * 20 * 0.5f);
}

TEST(T02_CalculateShipping, ZeroWeight)
{
    EXPECT_EQ(CalculateShipping(0, 10), -1);
}

TEST(T02_CalculateShipping, ZeroDistance)
{
    EXPECT_EQ(CalculateShipping(5, 0), -1);
}
