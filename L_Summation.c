#include <stdio.h>

// Recursive function to calculate sum
long long recursiveSum(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = recursiveSum(arr, n);
    printf("%lld\n", sum);

    return 0;
}
