#include <stdio.h>
#define MAX_SIZE 100
int linearSearch(int arr[], int n, int k, int *comparisons) {
    *comparisons = 0;
    for (int i = 0; i < n; i++) {
        (*comparisons)++;
        if (arr[i] == k) {
            return i; 
        }
    }
    return -1;
}
int main() {
    int arr[MAX_SIZE];
    int n, k, comparisons;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter key to search for: ");
    scanf("%d", &k);
    
         int result = linearSearch(arr, n, k, &comparisons);
    
    if (result != -1) {
             printf("Element %d found at index %d.\n", k, result);
    } else {
        printf("Element %d not found in the array.\n", k);
    }
    
    printf("Number of comparisons made: %d\n", comparisons);
    
    return 0;
}