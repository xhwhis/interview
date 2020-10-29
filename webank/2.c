#include <stdio.h>

int n, m;

void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void rotate_z(int*, int*, int);

void rotate_x(int *a, int *b, int x) {
    x %= 4;
    if (x == 0) return ;
    if (x == 1) {
        int tmp = *a;
        *a = *b;
        *b = n - tmp + 1;
        swap(&n, &m);
    } else if (x == 2) {
        rotate_x(a, b, 1);
        rotate_x(a, b, 1);
    } else {
        rotate_z(a, b, 1);
    }
}

void rotate_y(int *a, int *b, int y) {
    y %= 2;
    if (y == 0) return ;
    *b = m - *b + 1;
}

void rotate_z(int *a, int *b, int z) {
    z %= 4;
    if (z == 0) return ;
    if (z == 1) {
        int tmp = *b;
        *b = *a;
        *a = m - tmp + 1;
        swap(&n, &m);
    } else if (z == 2) {
        rotate_z(a, b, 1);
        rotate_z(a, b, 1);
    } else {
        rotate_x(a, b, 1);
    }
}

/*
 * 图案旋转 一张纸n * m 分割为n * m 个正方形 左上角(1, 1) 左下角(n, 1) 右上角(1, m) 右下角(n, m)
 * 顺时针旋转90度x次 平面翻转y次 逆时针旋转90度z次
 * 输入x, y, z 询问q次
 * 每次输入一个点(a, b) 输出他操作之后的点
 */

int main() {
    int x, y, z, q, a, b;
    scanf ("%d%d%d%d%d%d", &x, &y, &z, &n, &m, &q);
    for (int i = 0; i < q; i++) {
        scanf ("%d%d", &a, &b);
        rotate_x(&a, &b, x);
        rotate_y(&a, &b, y);
        rotate_z(&a, &b, z);
        if ((x + z) & 1) swap(&n, &m);
        printf ("%d %d\n", a, b);
    }
    return 0;
}
