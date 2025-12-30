#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char sentence[MAX_SIZE];
    int vowel_count = 0;
    char *char_ptr = NULL; 

    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    char_ptr = sentence;

    while (*char_ptr != '\0') {
        char current_char = *char_ptr;
        if (current_char == 'a' || current_char == 'e' || current_char == 'i' || 
            current_char == 'o' || current_char == 'u' ||
            current_char == 'A' || current_char == 'E' || current_char == 'I' || 
            current_char == 'O' || current_char == 'U') {
            
            vowel_count++;
        }

        char_ptr++;
    }

    printf("\n STRING ANALYSIS REPORT \n");
    printf("Input String     : \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}
