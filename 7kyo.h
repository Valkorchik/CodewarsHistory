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
#endif CODEWARSHISTORY_7KYO_H
