#include <gtest/gtest.h>
#include "../MyFunctions/T02_CalculateShipping.h"

const int N = 121;

TEST(T02_CalculateShipping, NegativeWeight)
{
    EXPECT_THROW(CalculateShipping(-1, false, N), std::invalid_argument);
}

TEST(T02_CalculateShipping, ZeroWeight)
{
    EXPECT_DOUBLE_EQ(CalculateShipping(0, false, N), 0.0);
}

TEST(T02_CalculateShipping, SmallWeight)
{
    EXPECT_NEAR(CalculateShipping(1.0, false, N), 2.0, 1e-9);
}

TEST(T02_CalculateShipping, MediumWeight)
{
    EXPECT_NEAR(CalculateShipping(4.0, false, N), 4.0, 1e-9);
}

TEST(T02_CalculateShipping, LargeWeight)
{
    EXPECT_NEAR(CalculateShipping(10.0, false, N), 9.0, 1e-9);
}

TEST(T02_CalculateShipping, ExpressMode)
{
    EXPECT_NEAR(CalculateShipping(1.0, true, N), 2.0 * 1.3, 1e-9);
}
