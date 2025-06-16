#include "Adapter.h"
#include "Adaptee.h"
#include <gtest/gtest.h>

TEST(AdapterTest, RequestTranslatesAdapteeString) 
{
    Adaptee adaptee;
    Adapter adapter(&adaptee);
    EXPECT_EQ(adapter.Request(), "Adapter: (TRANSLATED) Special behavior of the Adaptee.");
}
