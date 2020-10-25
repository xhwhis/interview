#include <stdio.h>

int a, b, c;

int solutin(int x, int y) {
    int val[8][8] = {
        0, 1, 1, 2, 1, 2, 2, 3,
        2, 3, 3, 4, 3, 4, 4, 5,
        2, 3, 3, 4, 3, 4, 4, 5,
        4, 5, 5, 6, 5, 6, 6, 7,
        2, 3, 3, 4, 3, 4, 4, 5,
        4, 5, 5, 6, 5, 6, 6, 7,
        4, 5, 5, 6, 5, 6, 6, 7,
        6, 7, 7, 8, 7, 8, 8, 9
    };
    return val[x - 1][y - 1];
}

int main() {
    int n, x, y;
    scanf ("%d%d%d%d", &a, &b, &c, &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d%d", &x, &y);
        printf ("%d\n", solutin(x, y));
    }
    return 0;
}
