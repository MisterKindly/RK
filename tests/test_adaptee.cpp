#include "Adaptee.h"
#include <gtest/gtest.h>

TEST(AdapteeTest, SpecificRequestReturnsSpecialString) 
{
    Adaptee adaptee;
    EXPECT_EQ(adaptee.SpecificRequest(), ".eetpadA eht fo roivaheb laicepS");
}
