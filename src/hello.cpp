#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int str_cmp_case_insensitive(const string& str1, const string& str2) {
    int i = 0;
    while (i < str1.length() && i < str2.length()) {
        char c1 = tolower((str1[i]));
        char c2 = tolower((str2[i]));
        if (c1 > c2) {
            return 1;
        }
        if (c1 < c2) {
            return -1;
        }
        i++;
    }
    if (str1.length() > str2.length()) {
        return 1;
    }
    if (str1.length() < str2.length()) {
        return -1;
    }
    return 0;
}
