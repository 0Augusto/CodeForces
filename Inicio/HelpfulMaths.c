#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%100s", s);
    
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '1') count1++;
        else if (s[i] == '2') count2++;
        else if (s[i] == '3') count3++;
    }
    
    const char* separator = "";
    for (int i = 0; i < count1; i++) {
        printf("%s1", separator);
        separator = "+";
    }
    for (int i = 0; i < count2; i++) {
        printf("%s2", separator);
        separator = "+";
    }
    for (int i = 0; i < count3; i++) {
        printf("%s3", separator);
        separator = "+";
    }
    printf("\n");
    
    return 0;
}
