#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // If n is invalid
    if (n <= 0) {
        return 0;
    }

    int x = 0, y = 1;

    // Print according to value of n
    if (n >= 1) printf("%d\t", x);
    if (n >= 2) printf("%d\t", y);

    for (int i = 3; i <= n; i++) {
        int next = x + y;
        printf("%d\t", next);
        x = y;
        y = next;
    }

    return 0;
}
