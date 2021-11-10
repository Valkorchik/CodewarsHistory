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
TEST(BasicTests, SmallestInVector)
{
    ASSERT_EQ(findSmallest({3,5,2}), 2);
    ASSERT_EQ(findSmallest({7,4,6,8}), 4);
    ASSERT_EQ(findSmallest({17,21,15,36,96}), 15);
    ASSERT_EQ(findSmallest({3,9,13,10,5,3,9,5}), 3);
    ASSERT_EQ(findSmallest({-12,-52,-27}), -52);
    ASSERT_EQ(findSmallest({-3,-27,-4,-2,-27,-2}), -27);
    ASSERT_EQ(findSmallest({-16,-37,-8,-46,-29}), -46);
    ASSERT_EQ(findSmallest({-14,-102,-96,-36,-46,-15,-44}), -102);
    ASSERT_EQ(findSmallest({12,0,-27}), -27);
    ASSERT_EQ(findSmallest({-13,-50,57,13,67,-13,57,108,67}), -50);
    ASSERT_EQ(findSmallest({-23,12,0,-47,-3,24}), -47);
}
TEST(BasicTests, EvenOrOdd) {

    ASSERT_EQ(odd_or_even({0}), "even");
    ASSERT_EQ(odd_or_even({1}), "odd");
    ASSERT_EQ(odd_or_even({}), "even");
    ASSERT_EQ(odd_or_even({0, 1, 5}), "even");
    ASSERT_EQ(odd_or_even({0, 1, 3}), "even");
    ASSERT_EQ(odd_or_even({1023, 1, 2}), "even");
    ASSERT_EQ(odd_or_even({-1023, -1, 3}), "odd");
    ASSERT_EQ(odd_or_even({0, 1, -4}), "odd");
}