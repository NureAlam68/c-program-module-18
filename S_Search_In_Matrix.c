#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    bool found = false;

    // Search for x in the matrix
    for (int i = 0; i < n && !found; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) {
                found = true;
                break;
            }
        }
    }

    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}
