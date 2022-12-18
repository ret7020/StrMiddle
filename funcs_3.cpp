#include <iostream>
#include <string.h>
#include "middle_str.h"
#include "binary.h"

string itc_decToBase(int num, int base){
    string alph = "0123456789ABCDEF";
    string res = "";
    int tmp = 0;
    if (num < 0){
        res = "-";
        num *= -1;
    }
    while(num > 0){
        tmp = num % base;
        res = alph[tmp] + res;
        num /= base;
    }
    return res;
}
