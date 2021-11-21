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
//Who likes it?
//You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items.
// We want to create the text that should be displayed next to such an item.
using namespace std;
string likes(const vector<string> &names)
{
    if(names.size()<=3){
        switch(names.size())
        {
            case 0:
                return "no one likes this";
                break;
            case 1:
                return names[0]+" likes this";
                break;
            case 2:
                return names[0]+" and "+names[1]+" like this";
                break;
            case 3:
                return names[0]+", "+names[1]+" and "+names[2]+" like this";
                break;
        }
    }
    else
    {
        return names[0]+", "+names[1]+" and "+ to_string(names.size()-2)+" others like this";
    }
    return ""; // Do your magic!
}
//Duplicate Encoder
//The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")"
//if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.
#include <algorithm>
#include <string>
using namespace std;
string duplicate_encoder(const string& word){
    string snew;
    string lower=word;
    for(int i=0;i<lower.size();i++)
    {
        lower[i]= tolower(lower[i]);
    }
    for(const auto& w:lower)
    {
        if(count(lower.begin(),lower.end(),w)>=2) snew+=")";
        else snew+="(";
    }
    return snew;
}
//Count the number of Duplicates
//Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string.
// The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.
#include <string>
#include <set>
#include <algorithm>
using namespace std;
size_t duplicateCount(const char* in)
{
    //....
    set<char> collector;
    string lower=in;
    for(int i=0;i<lower.size();i++)
    {
        lower[i]= tolower(in[i]);
    }
    for(const auto& word:lower)
    {
        if(count(lower.begin(),lower.end(),word)>=2)
        {
            collector.insert(word);
        }
    }
    return collector.size();
}
//Count characters in your string
//The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.
//What if the string is empty? Then the result should be empty object literal, {}
#include <map>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
map<char, unsigned> count(const string& string) {
    set<char>uniquer;
    map<char,unsigned> dict;
    unsigned number;
    for(auto const& word:string)
    {
        uniquer.insert(word);
    }
    for(char const& word:uniquer)
    {
        number=count(string.begin(),string.end(),word);
        dict.insert(make_pair(word,number));
    }
    return dict;
}
//Number Format
//Format any integer provided into a string with "," (commas) in the correct places.
#include<string>
using namespace std;
string numberFormat(long long n) {
    auto s = to_string(n);
    int filler;
    int a = s.length() - 3;
    while (a > 0) {
        if (s[a-1]=='-')
        {
            filler=1;
        }
        else s.insert(a, ",");
        a -= 3;
        }
    return s;
}
//All Star Code Challenge #15
//The scroller works by replacing the current text string with a similar text string, but with the first letter shifted to the end; this simulates movement.
//You're father is far too busy with the business to worry about such details, so, naturally, he's making you come up with the text strings.
//Create a function named rotate() that accepts a string argument and returns an array of strings with each letter from the input string being rotated to the end.
#include <string>
#include <vector>
using namespace std;
vector<string> rotate(const string& s) {
    // your code here
    string rotated=s;
    vector<string> collector;
    for(int i=0;i<s.size();i++)
    {
        rotated.erase(0,1);
        rotated+= s[i];
        collector.push_back(rotated);
    }
    return collector;
}
#endif
