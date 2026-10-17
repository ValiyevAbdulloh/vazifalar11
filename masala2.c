#include <stdio.h>

float chegirma(float narx) {
    return narx * 0.9;
}

int main() {
    float a[5];

    for (int i = 0; i<5; i++) {
        scanf("%f", &a[i]);
    }

    for (int i = 0; i<5; i++) {
        printf("%.0f ", chegirma(a[i]));
    }

    return 0;
}