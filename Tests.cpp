#include <gtest/gtest.h>
#include "8kyo.h"
#include "7kyo.h"
TEST(BasicTests, ReverseStrings) {
    ASSERT_EQ(reverseString("hello"),"olleh" );
    ASSERT_EQ(reverseString("rat"), "tar");
    ASSERT_EQ(reverseString("alpha"), "ahpla");
    ASSERT_EQ(reverseString("codewars"), "srawedoc");
    ASSERT_EQ(reverseString("football"), "llabtoof");
    ASSERT_EQ(reverseString("translation"), "noitalsnart");
}
TEST(BasicTests, ReturnNegatives){
    ASSERT_EQ(makeNegative(-42),-42);
    ASSERT_EQ(makeNegative(-5),-5);
    ASSERT_EQ(makeNegative(42),-42);
    ASSERT_EQ(makeNegative(9),-9);
    ASSERT_EQ(makeNegative(0),0);
    ASSERT_EQ(makeNegative(98758),-98758);
    ASSERT_EQ(makeNegative(-45354353),-45354353);
}
TEST(BasicTests,SumTwoSmallest){
    long expected = 13;
    long actual = sumTwoSmallestNumbers({ 5, 8, 12, 19, 22 });
    ASSERT_EQ(actual,expected);
    long expected1 = 21;
    long actual1 = sumTwoSmallestNumbers({ 65, 2, 46, 19, 282 });
    ASSERT_EQ(actual1,expected1);
    long expected2 = 12318+17652;
    long actual2 = sumTwoSmallestNumbers({ 5665443, 12318, 17652, 42324, 3242356 });
    ASSERT_EQ(actual2,expected2);
}

