#include <gtest/gtest.h>
#include "8kyo.h"
TEST(BasicTests, ReverseStrings) {
    ASSERT_EQ(reverseString("hello"),"olleh" );
    ASSERT_EQ(reverseString("rat"), "tar");
    ASSERT_EQ(reverseString("alpha"), "ahpla");
    ASSERT_EQ(reverseString("codewars"), "srawedoc");
    ASSERT_EQ(reverseString("football"), "llabtoof");
    ASSERT_EQ(reverseString("translation"), "noitalsnart");
}

