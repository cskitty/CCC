#include <iostream>

void fill_square(int i, int j, int d[4]) {
    int distance = 0;
    for (int x = j; x < i; x++) {
        distance += d[x];
    }
    printf("%d ", distance);
}


int main() {
    int d[4];
    scanf("%d %d %d %d", &d[0], &d[1], &d[2], &d[3]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                printf("0 ");
            }
            else if (i > j) {
                fill_square(i, j, d);
            }
            else {
                fill_square(j, i, d);
            }
        }
        printf("\n");
    }
    return 0;
}