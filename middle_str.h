#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <iostream>
#include <string.h>
using namespace std;

// Easy
long long itc_len(string str);

// Middle
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);

int itc_countWords(string str);
string itc_maxCharWord(string str);


#endif // MIDDLE_STR_H_INCLUDED