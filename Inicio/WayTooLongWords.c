#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

// Function to abbreviate a word if its length is greater than 10
void abbreviate_word(const char *word, char *result) {
    int len = strlen(word);
    
    if (len > 10) {
        // Construct the abbreviated word
        sprintf(result, "%c%d%c", word[0], len - 2, word[len - 1]);
    } else {
        // Copy the original word if not too long
        strcpy(result, word);
    }
}

int main() {
    int n;
    char word[MAX_WORD_LENGTH + 1];
    char result[MAX_WORD_LENGTH + 1];
    
    // Read number of words
    scanf("%d", &n);
    
    // Process each word
    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        abbreviate_word(word, result);
        printf("%s\n", result);
    }
    
    return 0;
}

