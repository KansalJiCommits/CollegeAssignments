# Average of Integers in C

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    printf("Enter %d integers:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum / n;
    printf("Average: %.2f\n", avg);
    return 0;
}
