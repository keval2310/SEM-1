#include <stdio.h>

int find_char(char *str, char c) {
    int flag = 0;
    while (*str != '\0') {
        if (*str == c) {
            flag = 1;
            break;
        }
        str++;
    }
    return flag;
}

int main() {
    char str[] = "hello world";
    char c = 'o';
    int flag = find_char(str, c);
    if (flag) {
        printf("Character '%c' found in the string.\n", c);
    } else {
        printf("Character '%c' not found in the string.\n", c);
    }
    return 0;
}