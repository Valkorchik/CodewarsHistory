#ifndef CODEWARSHISTORY_8KYO_H
#define CODEWARSHISTORY_8KYO_H
//Reversed Strings
//Complete the solution so that it reverses the string passed into it.
#include <string>
using namespace std ;
string reverseString (string str )
{
    string res_str;
    for (int i=str.size()-1;i>=0;i--)
    {
        res_str+=str[i];
    }
    return res_str;
}

#endif //CODEWARSHISTORY_8KYO_H
