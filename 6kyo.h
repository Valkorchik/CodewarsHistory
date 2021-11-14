#ifndef CODEWARSHISTORY_6KYO_H
#define CODEWARSHISTORY_6KYO_H
//The Vowel Code
//Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:
//Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above
#include <string>
using namespace std;
string encode(string str) {
    replace(str.begin(),str.end(),'a','1');
    replace(str.begin(),str.end(),'e','2');
    replace(str.begin(),str.end(),'i','3');
    replace(str.begin(),str.end(),'o','4');
    replace(str.begin(),str.end(),'u','5');
    return str;
}

string decode( string str) {
    replace(str.begin(),str.end(),'1','a');
    replace(str.begin(),str.end(),'2','e');
    replace(str.begin(),str.end(),'3','i');
    replace(str.begin(),str.end(),'4','o');
    replace(str.begin(),str.end(),'5','u');
    return str;
}
#endif
