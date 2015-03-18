/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  Blog:        http://blog.csdn.net/hcbbt
*  File:        AC_reverse_n.c
*  Create Date: 2015-03-18 22:53:16
*  Descripton:  O(1) space.
*/

#include <stdio.h>
#include <string.h>

void reverse_sub(char *s, int len) {
    char tmp;
    int i;
    for (i = 0; i < len / 2; ++i) {
        tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }
}

void reverseWords(char *s) {
    int i = 0;
    int cur = 0;    // current pos of dealed string
    int cnt = 0;    // current words' length
    int word_cnt = 0;

    while (1) {
        // skip spaces
        while (s[i] == ' ')
            ++i;

        if (s[i] == '\0')
            break;

        if (word_cnt++)
            s[cur++] = ' ';
        // count the length and move
        cnt = 0;
        while (s[i + cnt] != '\0' && s[i + cnt] != ' ') {
            if (cur != i)
                s[cur + cnt] = s[i + cnt];
            cnt++;
        }

        reverse_sub(s + cur, cnt);

        // update the pos and add space
        i += cnt;
        cur += cnt;
    }
    s[cur] = '\0';
    reverse_sub(s, cur);
}

int main() {
    char str[100];
    while (gets(str)) {
        printf("'%s'\n", str);
        reverseWords(str);
        printf("'%s'\n\n", str);
    }
    return 0;
}

