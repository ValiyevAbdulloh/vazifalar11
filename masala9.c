#include <stdio.h>

struct Xodim {
    char ismi[50];
    int soat;
};

int main() {
    FILE *f = fopen("xodimlar.txt", "r");

    if (f == NULL) {
        printf("Fayl ochilmadi!");
        return 1;
    }

    int n;
    fscanf(f, "%d", &n);

    struct Xodim x[n];

    for (int i = 0; i < n; i++) {
        fscanf(f, "%s %d", x[i].ismi, &x[i].soat);
    }

    fclose(f);

    for (int i = 0; i < n; i++) {
        printf("%s: %d som\n",
               x[i].ismi, x[i].soat * 15000);
    }

    return 0;
}