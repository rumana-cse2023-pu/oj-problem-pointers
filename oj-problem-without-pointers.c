#include <stdio.h>

int add_without_pointer (int x, int y) {
    return x + y;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int sum = add_without_pointer (X, Y);

    printf("%d\n", sum);

    return 0;
}
