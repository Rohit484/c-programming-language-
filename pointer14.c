#include <stdio.h>
int main() {
    int n, inv = 0, inverso;
    printf("Introduce un numero de 5 digitos: ");
    scanf("%d", &n);
    while (n != 0) {
        inverso = n % 10;
        inv = inv * 10 + inverso;
        n /= 10;
    }
    printf("El numero invertido es = %d", inv);
    return 0;
}
