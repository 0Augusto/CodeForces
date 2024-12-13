#include <stdio.h>

int main() {
    // Variables to store board dimensions
    int M, N;

    // Read board dimensions
    scanf("%d %d", &M, &N);

    // Calculate maximum number of dominoes
    // Each domino covers 2 squares, so we divide total board area by 2
    int max_dominoes = (M * N) / 2;

    // Print the result
    printf("%d\n", max_dominoes);

    return 0;
}
