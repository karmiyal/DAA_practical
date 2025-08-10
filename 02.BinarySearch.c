#include <stdio.h>
void BinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int found = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }else if (arr[mid] < target) {
            low = mid + 1; // search right half
        }else {
            high = mid - 1; // search left half
        }
    }
if (!found) {
        printf("Element not found\n");
    }
}
int main() {
    // Array must be sorted for Binary Search
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    BinarySearch(arr, size, target);
    return 0;
}
