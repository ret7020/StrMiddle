#include <iostream>
#include <string.h>
#include "middle_str.h"

string itc_Cezar(string str, int k)
{
    if (k == 0) return str;
    int i = 0;
    string ans = "";
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] + k > 'z') ans += str[i] + k - 26;
            else if (str[i] + k < 'a') ans += str[i] + k + 26;
            else ans += str[i] + k;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i] + k > 'Z') ans += str[i] + k - 26;
            if (str[i] + k < 'A') ans += str[i] + k + 26;
            else ans += str[i] + k;
        }
        else ans += str[i];
        i += 1;
    }
    return ans;
}