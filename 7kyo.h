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
#endif CODEWARSHISTORY_7KYO_H
