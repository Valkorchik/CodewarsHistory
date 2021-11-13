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
<<<<<<< Updated upstream
#endif
=======
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
#endif
>>>>>>> Stashed changes
