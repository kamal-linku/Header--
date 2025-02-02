#include <stdio.h>
#include "string_utils.h"

int main() {
    char str[] = "hello world! this is a test string.";

    printf("\nOriginal String: %s", str);
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
