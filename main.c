#include <stdio.h>
#include <stdlib.h>
#include "Hash.h"

int main() {
    int input_size;

    char *end;

    printf("%s\n", "Enter the input size");
    char size_buf[10];
    while (fgets(size_buf, sizeof(size_buf), stdin)) {
        input_size = strtol(size_buf, &end, 10);
        if (end == size_buf || *end != '\n') {
            printf("Please enter an integer: ");
        } else break;
    }
    char* input_text = malloc(input_size);

    printf("%s\n", "Enter the input text");
    gets(input_text);

    printf("%u\n", jenkins_one_at_a_time_hash(input_text, input_size));

    return 0;
}
