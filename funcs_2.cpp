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
