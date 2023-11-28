#include <stdio.h>

void add_with_pointer(int x, int y, int *sum) {
    *sum = x + y;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int sum;
    add_with_pointer (X, Y, &sum);

    printf("%d\n", sum);

    return 0;
}
