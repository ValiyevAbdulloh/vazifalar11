#include <stdio.h>

int main() {
    int a[10];

    for (int i = 0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    int n;
    scanf("%d", &n);

    if (a[n - 1] == 0) {
        printf("Joy mavjud");
    } else {
        printf("Joy band");
    }

    return 0;
}