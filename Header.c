#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "string_utils.h"

int word_count(const char *str) {
    int count = 0, in_word = 0;
    while (*str) {
        if (isspace(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

int sentence_count(const char *str) {
    int count = 0;
    while (*str) {
        if (*str == '.' || *str == '!' || *str == '?') {
            count++;
        }
        str++;
    }
    return count;
}

void to_camel_case(char *str) {
    int i = 0, j = 0, capitalize = 0;
    while (str[i]) {
        if (isspace(str[i])) {
            capitalize = 1;
        } else {
            str[j++] = capitalize ? toupper(str[i]) : tolower(str[i]);
            capitalize = 0;
        }
        i++;
    }
    str[j] = '\0';
}

void to_sentence_case(char *str) {
    int first = 1;
    for (int i = 0; str[i]; i++) {
        if (first && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            first = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            first = 1;
        }
    }
}

void to_toggle_case(char *str) {
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
}

void capitalize_each_word(char *str) {
    int capitalize = 1;
    for (int i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            capitalize = 1;
        } else if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}
