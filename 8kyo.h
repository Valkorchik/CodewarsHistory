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
//Rock Paper Scissors
//Let's play! You have to return which player won! In case of a draw return Draw!
#include <string>
using namespace std;
string rps(const string& p1, const string& p2)
{
    if (p1=="scissors" && p2=="paper") {
        return "Player 1 won!";
    }
    if (p1=="scissors" && p2=="rock") {
        return "Player 2 won!";
    }
    if (p1=="paper" && p2=="scissors") {
        return "Player 2 won!";
    }
    if (p1=="paper" && p2=="rock") {
        return "Player 1 won!";
    }
    if (p1=="rock" && p2=="scissors") {
        return "Player 1 won!";
    }
    if (p1=="rock" && p2=="paper") {
        return "Player 2 won!";
    }
    if (p1=="scissors" && p2=="scissors") {
        return "Draw!!";
    }
    if (p1=="paper" && p2=="paper") {
        return "Draw!";
    }
    if (p1=="rock" && p2=="rock") {
        return "Draw!";
    }
}
#endif

