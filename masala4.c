#include <stdio.h>

int main() {
    int a[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int qator, orin;
    scanf("%d %d", &qator, &orin);

    if (a[qator - 1][orin - 1] == 0) {
        printf("%d-qator, %d-orindiq: Bosh", qator, orin);
    } else {
        printf("%d-qator, %d-orindiq: Band", qator, orin);
    }

    return 0;
}