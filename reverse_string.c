# Reverse String in C

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    int len = strlen(str);
    printf("Reversed string: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
