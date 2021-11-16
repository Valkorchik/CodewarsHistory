#include <gtest/gtest.h>
#include "8kyo.h"
#include "7kyo.h"
#include "6kyo.h"
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
TEST(BasicTests, NextPerfectSquare)
{
    ASSERT_EQ(findNextSquare(625), 676);
    ASSERT_EQ(findNextSquare(319225), (320356));
    ASSERT_EQ(findNextSquare(15241383936), (15241630849));
    ASSERT_EQ(findNextSquare(155), (-1));
}
TEST(BasicTests, SortNumbers)
{
    vector<int>numbers1={1,2,3,5,10};
    vector<int>numbers2={};
    vector<int>numbers3={2,10,20};
    vector<int>numbers4={2,10,20};
    ASSERT_EQ(solution({1,2,3,10,5}), (numbers1));
    ASSERT_EQ(solution({}), (numbers2));
    ASSERT_EQ(solution({20,2,10}), (numbers3));
    ASSERT_EQ(solution({2,20,10}), (numbers4));
}
TEST(BasicTests, AnagrammDetector)
{
    ASSERT_EQ(isAnagram("foefet", "toffee"), (true));
    ASSERT_EQ(isAnagram("Buckethead", "DeathCubeK"), true);
    ASSERT_EQ(isAnagram("Twoo", "WooT"), (true));
    ASSERT_EQ(isAnagram("dumble", "bumble"), (false));
    ASSERT_EQ(isAnagram("around", "round"), (false));
    ASSERT_EQ(isAnagram("ound", "round"), (false));
    ASSERT_EQ(isAnagram("apple", "pale"), (false));
    ASSERT_EQ(isAnagram("apple", "appeal"), (false));
    ASSERT_EQ(isAnagram("", ""), (true));
}
TEST(BasicTests, PredictAge)
{
    ASSERT_EQ(predictAge(65,60,75,55,60,63,64,45), (86));
}
TEST(BasicTests, ArrayFilter)
{
    vector<int> vec1={2, 4, 6};
    vector<int> vec2={};
    vector<int> vec3={};
    vector<int> vec4={2};
    vector<int> vec5={2, 4};

    vector<int> vect1={2, 4, 5, 6};
    vector<int> vect2={};
    vector<int> vect3={1};
    vector<int> vect4={1, 2};
    vector<int> vect5={1, 2, 3, 4};

    ASSERT_EQ(get_even_numbers(vect1),vec1);
    ASSERT_EQ(get_even_numbers(vect2),vec2);
    ASSERT_EQ(get_even_numbers(vect3),vec3);
    ASSERT_EQ(get_even_numbers(vect4),vec4);
    ASSERT_EQ(get_even_numbers(vect5),vec5);
}
TEST(BasicTests, IsSorted)
{
    ASSERT_EQ(is_sorted_and_how({1, 2}), ("yes, ascending"));
    ASSERT_EQ(is_sorted_and_how({15, 7, 3, -8}), ("yes, descending"));
    ASSERT_EQ(is_sorted_and_how({4, 2, 30}), ("no"));

}
TEST(BasicTests, Repeater)
{
    ASSERT_EQ(repeater("a", 5), ("aaaaa"));
    ASSERT_EQ(repeater("Na", 16), ("NaNaNaNaNaNaNaNaNaNaNaNaNaNaNaNa"));
    ASSERT_EQ(repeater("Wub ", 6), ( "Wub Wub Wub Wub Wub Wub "));
}
TEST(BasicTests, Isograms)
{
    ASSERT_EQ(is_isogram("Dermatoglyphics"), (true));
    ASSERT_EQ(is_isogram("moose"), (false));
    ASSERT_EQ(is_isogram("isIsogram"), (false));
}
TEST(BasicTests,VowelCode) {
    ASSERT_EQ(encode("hello"), ("h2ll4"));
    ASSERT_EQ(encode("How are you today?"), ("H4w 1r2 y45 t4d1y?"));
    ASSERT_EQ(encode("This is an encoding test."), ("Th3s 3s 1n 2nc4d3ng t2st."));
    ASSERT_EQ(decode("h2ll4"), ("hello"));
    ASSERT_EQ(decode("H4w 1r2 y45 t4d1y?"), ("How are you today?"));
    ASSERT_EQ(decode("Th3s 3s 1n 2nc4d3ng t2st."), ("This is an encoding test."));
}
TEST(Basictests, FindMiddle)
{
    ASSERT_EQ(get_middle("test"), ("es"));
    ASSERT_EQ(get_middle("testing"), ("t"));
}
TEST(BasicTests, CarInfo)
{
    ASSERT_EQ(bumps("n"), ("Woohoo!"));
    ASSERT_EQ(bumps("_nnnnnnn_n__n______nn__nn_nnn"), ("Car Dead"));
    ASSERT_EQ(bumps("______n___n_"), ("Woohoo!"));
    ASSERT_EQ(bumps("nnnnnnnnnnnnnnnnnnnnn"), ("Car Dead"));
}
TEST(BasicTests, FromLargest)
{
    ASSERT_EQ(maxNumber(213), (321));
    ASSERT_EQ(maxNumber(7389), (9873));
    ASSERT_EQ(maxNumber(63792), (97632));

    ASSERT_EQ(maxNumber(566797), (977665));
    ASSERT_EQ(maxNumber(2399783), (9987332));
    ASSERT_EQ(maxNumber(79797979), (99997777));

    ASSERT_EQ(maxNumber(17693284),(98764321));
    ASSERT_EQ(maxNumber(17758936), (98776531));
    ASSERT_EQ(maxNumber(134976658), (987665431));
}
TEST(Interesting,WhoLikes)
{
    ASSERT_EQ(likes({}), ("no one likes this"));
    ASSERT_EQ(likes({"Peter"}), ("Peter likes this"));
    ASSERT_EQ(likes({"Jacob", "Alex"}), ("Jacob and Alex like this"));
    ASSERT_EQ(likes({"Max", "John", "Mark"}), ("Max, John and Mark like this"));
    ASSERT_EQ(likes({"Alex", "Jacob", "Mark", "Max"}), ("Alex, Jacob and 2 others like this"));
}
TEST(Interesting, DuplicateEncoder)
{
    ASSERT_EQ(duplicate_encoder("din"), ("((("));
    ASSERT_EQ(duplicate_encoder("recede"), ("()()()"));
    ASSERT_EQ(duplicate_encoder("Success"), (")())())"));
    ASSERT_EQ(duplicate_encoder("CodeWarrior"), ("()(((())())"));
    ASSERT_EQ(duplicate_encoder("Supralapsarian"), (")()))()))))()("));
    ASSERT_EQ(duplicate_encoder("(( @"), ("))(("));
    ASSERT_EQ(duplicate_encoder(" ( ( )"), (")))))("));
}
TEST(Inter, ConterDupl) {
    ASSERT_EQ(duplicateCount(" "), (0));
    ASSERT_EQ(duplicateCount(""), (0));
    ASSERT_EQ(duplicateCount("aabbcde"), (2));
    ASSERT_EQ(duplicateCount("aabBcde"), (2));
    ASSERT_EQ(duplicateCount("Indivisibility"), (1));
    ASSERT_EQ(duplicateCount("Indivisibilities"), (2));
    ASSERT_EQ(duplicateCount("ABBA"), (2));

}