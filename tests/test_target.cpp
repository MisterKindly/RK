#include "Target.h"
#include <gtest/gtest.h>

TEST(TargetTest, RequestReturnsDefaultString) 
{
    Target target;
    EXPECT_EQ(target.Request(), "Target: The default target's behavior.");
}
