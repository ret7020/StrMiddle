#include <iostream>
#include <string.h>
#include "middle_str.h"

int itc_countWords(string str){
    int c = 0;
    bool flag = true;
    for( long long i = 0; str[i] != '\0'; ++i) {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != ' ')
            flag = false;

        if (str[i] == ' ' && flag == true) c += 1;
        if (str[i] == ' ' && flag == false) flag = true;
        
    }
    if(flag == false) return c;
    
    return c + 1;
}

string itc_maxCharWord(string str){
    long long max = 0, len = itc_len(str);
	string a, b;
	if (itc_countWords(str) == 1) return "error";
	for (int i = 0; i < len; i++) {
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
			a += str[i];
		else if (itc_len(a) > max) { max = itc_len(a); b = a; a = ""; }
		else a = "";
	}
	if (itc_len(a) > max) b = a;
	return b;
}
