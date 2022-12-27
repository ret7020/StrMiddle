#include <iostream>
#include <string.h>
#include "middle_str.h"

using namespace std;

long long itc_find_str(string str1, string str2)
{
	long long ind = 0, st1 = itc_len(str1), st2 = itc_len(str2), otv = -1;
	for (int i = 0; i < st1; i++) {
		if (str1[i] == str2[0]) {
			otv = i;
			for (int j = 0; j < st2; j++) {
				if (str1[j + i] == str2[ind]) {
					ind++;
				}
				else {
					ind = 0;
					break;
				}
			}
		}
		if (ind == st2) {
			break;
		}
	}
	return(otv);
}


int itc_countWords(string str)
{
    int c = 0;
    bool flag = true;
    for (long long i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != ' ')
            flag = false;

        if (str[i] == ' ' && flag == true)
            c += 1;
        if (str[i] == ' ' && flag == false)
            flag = true;
    }
    if (flag == false)
        return c;

    return c + 1;
}

string itc_maxCharWord(string str)
{
    long long max = 0, len = itc_len(str);
    string a, b;
    if (itc_countWords(str) <= 1) return "error";
    for (int i = 0; i < len; ++i)
    {
        if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
            a += str[i];
        else if (itc_len(a) > max)
        {
            max = itc_len(a);
            b = a;
            a = "";
        }
        else
            a = "";
    }
    if (itc_len(a) > max)
        b = a;
    if (!itc_len(b)) return "error";
    return b;
}

char itc_sameChar(string str)
{
    for (long long i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            for (long long j = 0; str[j] != '\0'; ++j)
                if (str[j] == str[i])
                    return str[j];
        }
    }
    return '0';
}

bool itc_isFirstInSecond(string s1, string s2)
{
	return itc_find_str(s1, s2) != -1;

}
