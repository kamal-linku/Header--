#include <stdio.h>
#include "string_utils.h"

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    printf("\nWord Count: %d", word_count(str));
    printf("\nSentence Count: %d", sentence_count(str));

    to_camel_case(str);
    printf("\nCamel Case: %s", str);

    to_sentence_case(str);
    printf("\nSentence Case: %s", str);

    to_toggle_case(str);
    printf("\nToggle Case: %s", str);

    capitalize_each_word(str);
    printf("\nCapitalized Each Word: %s\n", str);

    return 0;
}
