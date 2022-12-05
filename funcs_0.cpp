#include <iostream>
#include <string.h>
#include "middle_str.h"


long long itc_len(string str) {
  long long kol = 0;
  for (int i = 0; str[i] != '\0'; i++)
    kol++;
  
  return kol;
}


bool itc_isDigit(unsigned char c)
{
	return((c >= 48) && (c <= 57));
}

unsigned char itc_toUpper(unsigned char c){
    if(c >= 97 && c <= 122) return c - 32;
    return c;
}


unsigned char itc_changeCase(unsigned char c){
    if ( c <= 'z' && c >= 'a')
        return c - ' ';
    else if(c <= 'Z' && c >= 'A')
        return c + ' ';
    else
        return c;
}

bool itc_compare(string s1, string s2){
    for (long long i = 0; i <= itc_len(s1); i++) {
        if (s1[i] != s2[i]) {
            return false;
            break;
        }

    }
    return true;
}
