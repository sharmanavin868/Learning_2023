
#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    while (*str != '\0') {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggleCase(str);

    printf("Toggled case string: %s\n", str);

    return 0;
}