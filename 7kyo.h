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
#endif
