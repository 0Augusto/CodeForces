#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    char statement[10];

    // Lê o número de declarações
    scanf("%d", &n);

    // Processa cada declaração
    for (int i = 0; i < n; i++) {
        // Lê a declaração
        scanf("%s", statement);

        // Verifica se é incremento
        if (strstr(statement, "++")) {
            x++;
        } 
        // Verifica se é decremento  
        else if (strstr(statement, "--")) {
            x--;
        }
    }

    // Imprime o valor final de x
    printf("%d\n", x);

    return 0;
}
