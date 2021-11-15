#ifndef CODEWARSHISTORY_7KYO_H
#define CODEWARSHISTORY_7KYO_H
#include <vector>
#include <algorithm>
using namespace std;
long sumTwoSmallestNumbers(vector<int> numbers)
{
    sort(numbers.begin(),numbers.end());
    return numbers[0]+numbers[1];
}
//Odd or Even?
//Given a list of integers, determine whether the sum of its elements is odd or even.
//Give your answer as a string matching "odd" or "even".
//If the input array is empty consider it as: [0] (array with a zero).
#include <string>
#include <vector>
using namespace std;
string odd_or_even(const vector<int> &arr)
{
    int sum=0;
    for (int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum%2==0 ? "even" : "odd";
}
//Find the next perfect square!
//You might know some pretty large perfect squares. But what about the NEXT one?
//Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter.
//Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.
//If the parameter is itself not a perfect square then -1 should be returned. You may assume the parameter is non-negative.
#include <cmath>
long int findNextSquare(long int sq) {
    // Return the next square if sq if a perfect square, -1 otherwise
    long coef;
    if(sqrt(sq)==int(sqrt(sq)))
    {
        coef=sqrt(sq)+1;
        return (coef*coef);
    }
    else return -1;
}
//Sort Numbers
//Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should return an empty array.
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> nums) {
    sort(nums.begin(),nums.end());
    return nums;
}
//Anagram Detection
#include <algorithm>
#include <string>
using namespace std;
bool isAnagram(string test, string original){
    //your code here
    if(test.size()==original.size())
    {
        for(int i=0;i<test.size();i++)
        {
            if(isupper(test[i])) test[i]=tolower(test[i]);
            if(isupper(original[i])) original[i]=tolower(original[i]);
        }
        sort(test.begin(),test.end());
        sort(original.begin(),original.end());
        if ((test)== (original)) return true;
        else return false;
    }
    else return false;

}
//Predict your age!
//My grandfather always predicted how old people would get, and right before he passed away he revealed his secret!
//In honor of my grandfather's memory we will write a function using his formula!
#include <math.h>
using namespace std;
int power(int& age)
{
    return age*age;
}
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
    int final;
    final=power(age1)+power(age2)+power(age3)+power(age4)+power(age5)+power(age6)+power(age7)+power(age8);
    return sqrt(final)/2;
}
//JavaScript Array Filter
// delete even numbers
#include <vector>
using namespace std;
vector<int> get_even_numbers(vector<int>& arr) {
    // your code here
    for(int i=0;i<arr.size();i++)
    {
        if (arr[i]%2!=0) arr.erase(arr.begin()+i);
    }
    return arr;
}
//Sorted? yes? no? how?
//Complete the method which accepts an array of integers, and returns one of the following:
//"yes, ascending" - if the numbers in the array are sorted in an ascending order
//"yes, descending" - if the numbers in the array are sorted in a descending order
//"no" - otherwise
#include <vector>
#include <algorithm>
using namespace std;
string is_sorted_and_how(vector<int> array)
{
    vector<int>arrayS=array;
    sort(arrayS.begin(),arrayS.end());
    vector<int>arrayR=array;
    sort(arrayR.begin(),arrayR.end());
    reverse(arrayR.begin(),arrayR.end());
    if(array==arrayS) return "yes, ascending";
    if(array==arrayR) return "yes, descending";
    return "no";
     // TODO: implementation
}
//Thinkful - String Drills: Repeater
//Write a function named repeater() that takes two arguments (a string and a number), and returns a new string where the input string is repeated that many times.
#include <string>
using namespace std;
string repeater(string str, int n)
{
    string collector;
    for(int i=0;i<n;i++)
    {
        collector+=str;
    }
    return collector;
}
//Isograms
//An isogram is a word that has no repeating letters, consecutive or non-consecutive.
// Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.
#include <algorithm>
using namespace std;
bool is_isogram(string str) {
    int counter;
    for(int i=0;i<str.size();i++)
    {
       if(isupper(str[i]))
       {
           str[i]= tolower(str[i]);
       }
    }
    for(int i=0;i<str.size();i++)
    {
        counter=count(str.begin(),str.end(),str[i]);
        if(counter>=2) return false;
    }
    return true;
}
//Get the Middle Character
//You are going to be given a word. Your job is to return the middle character of the word.
// If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.
using namespace std;
string get_middle(string input)
{
    string filler;
    unsigned long index;
    for(int i=0;i<input.size();i++)
    {
        if(input.size()%2==0)
        {
            index=input.size()/2;
            filler+=input[index-1];
            filler+=input[index];
            return filler;
        }
        else {
            index=((input.size()-1)/2)+1;
            filler=input[index-1];
            return filler;
        }
    }
    return "";
}
//Bumps in the Road
//Your car is old, it breaks easily. The shock absorbers are gone and you think it can handle about 15 more bumps before it dies totally.
#include <algorithm>
using namespace std;
string bumps(string road){
    //your code here
    return count(road.begin(), road.end(), 'n')>15 ? "Car Dead" : "Woohoo!";
}
//Form The Largest
//Given a number , Return _The Maximum number _ could be formed from the digits of the number given .
#include <string>
#include <vector>
using namespace std;
long long int maxNumber (long long int number)
{
    vector<char>vec;
    string filler;
    string iter= to_string(number);
    for(const char& num:iter)
    {
        vec.push_back(num);
    }
    sort(vec.rbegin(),vec.rend());
    for(const auto& num:vec)
    {
        filler+=num;
    }
    return stoi(filler);
}
#endif
