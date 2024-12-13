#include <stdio.h>

int main() {
    // Variáveis para armazenar n, k e os scores
    int n, k;
    int scores[50];

    // Leitura de n e k
    scanf("%d %d", &n, &k);

    // Leitura dos scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Variável para contar quantos avançam
    int advancing = 0;

    // Pontuação do k-ésimo participante
    int k_score = scores[k-1];

    // Verificar quem avança
    for (int i = 0; i < n; i++) {
        // Condições para avançar:
        // 1. Pontuação maior que zero
        // 2. Pontuação maior ou igual ao k-ésimo participante
        if (scores[i] > 0 && scores[i] >= k_score) {
            advancing++;
        }
    }

    // Imprimir número de participantes que avançam
    printf("%d\n", advancing);

    return 0;
}
