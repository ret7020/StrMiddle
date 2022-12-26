#include <iostream>
#include <string.h>
#include "middle_str.h"
#include "binary.h"

using namespace std;

string itc_slice_str(string str, int start, int endd){
    string res = "";
    if (endd >= itc_len(str))
        endd = itc_len(str) - 1;
    if(start > endd){
        return str;
    }else if(start == (itc_len(str) - 1)){
        res += str[itc_len(str) - 1];
        return res;
    }else{
        for (long long i = start; i <= endd; i++){
            res += str[i];
        }
        return res;
    }
    return "-1";
}



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

string itc_rmFreeSpace(string str)
{
    long long len = itc_len(str);
    long long c = 0;
    if (str == "") return str;
    else if (str[0] == ' ') c = 1;
    else c = 0;
    while ((str[c] == ' ') && (c < len)) c++;
    string res_buff = "";
    for (int i = c; i < len; i++) {
        if ((i != len - 1) && ((str[i] != ' ') || (str[i + 1] != ' '))) res_buff += str[i];
    }
    if (str[len - 1] != ' ') res_buff += str[len - 1];
    return res_buff;
}

bool itc_isIp(string str)
{
    int check = 1;
	long long len = itc_len(str), wordcount = 1;
	for (int i = 0; i < len; ++i) {
		if ((str[i] >= '0') && (str[i] <= '9')) {
			check = check * 10 + str[i] - 48;
		}
		else {
			if ((str[i] != '.') || (check == 1) || (check % 1000 > 255) || (check % 1000 < 0))
                return 0;
			check = 1;
			wordcount++;
		}
	}
	if (wordcount != 4)
        return 0;
	return 1;
}

string itc_DecToBin(string str){
    string temp = "", temp2 = "";
    long long temp_num = 0;
    for(long long i = 0; str[i] != '\0'; ++i){
        if (str[i] < '0' || str[i] > '9'){
            temp2 += itc_decToBase(str_to_num(temp), 2) + str[i];
            temp = "";
        }
        if ( itc_isDigit(str[i]))
            temp += str[i];  
    }
    temp2 += itc_decToBase(str_to_num(temp), 2);
    return temp2;
}
