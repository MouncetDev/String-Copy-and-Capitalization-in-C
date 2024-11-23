#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[100]; // Allocate a buffer for user input
    printf("S: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    // Remove the newline character if present
    s[strcspn(s, "\n")] = '\0';

    // Allocate memory for the copied string
    char *t = malloc(strlen(s) + 1);
    if (t == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Copy the string
    for (int i = 0; i < strlen(s) + 1; i++) {
        t[i] = s[i];
    }

    // Capitalize the first character
    t[0] = toupper(t[0]);

    // Print both strings
    printf("S: %s\n", s);
    printf("T: %s\n", t);

    // Free allocated memory
    free(t);

    return 0;
}
