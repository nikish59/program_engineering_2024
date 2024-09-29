#include <gtest/gtest.h>

#include "include/my_add.hpp"

TEST(Add, Simple) {
    EXPECT_EQ(my_add(3,3), 6);
    EXPECT_EQ(my_add(4, 8), my_add(8, 4));
    EXPECT_EQ(my_add(-45, 9), -36);
}