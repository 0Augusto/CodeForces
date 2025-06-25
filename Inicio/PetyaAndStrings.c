#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s1[101], s2[101];
    scanf("%100s", s1);
    scanf("%100s", s2);
    
    int len = strlen(s1);
    
    for (int i = 0; i < len; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 < c2) {
            printf("-1\n");
            return 0;
        } else if (c1 > c2) {
            printf("1\n");
            return 0;
        }
    }
    
    printf("0\n");
    return 0;
}
