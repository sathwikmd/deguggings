#include <stdio.h>
#include<string.h>
int main() {
    char s[100];
    scanf("%s", &s);

    // Check if the string has at least 7 characters
    if (strlen(s) >= 7) {
        printf("%c%c%c\n", s[0], s[2], s[5]);
    } else {
        printf("Input string is too short\n");
    }
    
}
