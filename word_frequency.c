# Word Frequency Counter in C

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_LEN 1000

int main() {
    char paragraph[MAX_LEN];
    char words[MAX_WORDS][50];
    int freq[MAX_WORDS] = {0};
    int word_count = 0;

    printf("Enter a paragraph:\n");
    fgets(paragraph, MAX_LEN, stdin);

    char *token = strtok(paragraph, " ,.-\n");
    while(token != NULL) {
        int found = 0;
        for(int i=0; i<word_count; i++) {
            if(strcmp(words[i], token) == 0) {
                freq[i]++;
                found = 1;
                break;
            }
        }
        if(!found) {
            strcpy(words[word_count], token);
            freq[word_count] = 1;
            word_count++;
        }
        token = strtok(NULL, " ,.-\n");
    }

    printf("Word frequencies:\n");
    for(int i=0; i<word_count; i++) {
        printf("%s: %d\n", words[i], freq[i]);
    }
    return 0;
}
