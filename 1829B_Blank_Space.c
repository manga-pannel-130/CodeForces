#include <stdio.h>
 
int longest_blank_space(int arr[], int n) {
    int max_blank_space = 0;
    int current_blank_space = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            current_blank_space++;
            max_blank_space = (current_blank_space > max_blank_space) ? current_blank_space : max_blank_space;
        } else {
            current_blank_space = 0;
        }
    }
 
    return max_blank_space;
}
 
int main() {
    int t; // Number of test cases
    scanf("%d", &t);
 
    for (int i = 0; i < t; i++) {
        int n; // Length of the array
        scanf("%d", &n);
 
        int arr[n]; // Binary array
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
 
        int result = longest_blank_space(arr, n);
        printf("%d\n", result);
    }
 
    return 0;
}