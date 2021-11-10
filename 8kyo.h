#ifndef CODEWARSHISTORY_8KYO_H
#define CODEWARSHISTORY_8KYO_H
//Reversed Strings
//Complete the solution so that it reverses the string passed into it.
#include <string>
using namespace std;
string reverseString (string str )
{
    string res_str;
    for (int i=str.size()-1;i>=0;i--)
    {
        res_str+=str[i];
    }
    return res_str;
}
//Return Negative
//In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?
int makeNegative(int num)
{
    return num>0 ? num*(-1) : num;
}
//Find the smallest integer in the array
//Given an array of integers your solution should find the smallest integer.
#include <vector>
#include <algorithm>
using namespace std;
int findSmallest(vector <int> list)
{
    // Your Code is Here ... Hope you Enjoy
    sort(list.begin(),list.end());
    return list[0];
}
#endif CODEWARSHISTORY_8KYO_H
