#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        printf("%d ", a[start]);
        start++;

        if (start <= end) {
            printf("%d ", a[end]);
            end--;
        }
    }

    printf("\n");
    return 0;
}
