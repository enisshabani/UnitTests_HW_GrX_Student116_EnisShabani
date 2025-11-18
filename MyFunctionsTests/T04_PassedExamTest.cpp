#include <gtest/gtest.h>
#include "../MyFunctions/T04_PassedExam.h"

TEST(T04_PassedExam, Passed)
{
    EXPECT_TRUE(PassedExam(80));
}

TEST(T04_PassedExam, Failed)
{
    EXPECT_FALSE(PassedExam(30));
}

TEST(T04_PassedExam, ExactLimit)
{
    EXPECT_TRUE(PassedExam(50));
}
