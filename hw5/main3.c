#include <stdio.h>

int main() {
    int i = 1;

    for (int j = 1; j <= 81; j++) {
        printf("%2d * %2d = %2d\t", i, j / i, j);
        if (j % 9 == 0) {
            printf("\n");
            i++;
        }
    }

    return 0;
}
