#include <stdio.h>

int main() {
    int n;  // Número de problemas
    scanf("%d", &n);

    int count = 0;  // Contador para problemas resolvidos

    for (int i = 0; i < n; i++) {
        int p, v, t;
        scanf("%d %d %d", &p, &v, &t);

        // Contar o número de amigos que têm certeza
        int sure_count = p + v + t;
        
        // Se pelo menos dois amigos têm certeza, conta como resolvido
        if (sure_count >= 2) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
