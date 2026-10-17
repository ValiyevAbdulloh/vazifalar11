#include <stdio.h>

void hisoblagich(int n) {
    if (n == 0) {
        printf("Xabar yuborildi!");
        return;
    }

    printf("%d\n", n);
    hisoblagich(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    hisoblagich(n);

    return 0;
}