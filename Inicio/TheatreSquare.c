#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long tiles_along_n = (n + a - 1) / a;
    long long tiles_along_m = (m + a - 1) / a;
    printf("%lld\n", tiles_along_n * tiles_along_m);
    return 0;
}
