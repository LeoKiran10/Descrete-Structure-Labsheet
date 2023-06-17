#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number between 1 and n (inclusive)
int rand_int(int n) {
    return rand() % n + 1;
}

// Function to perform a probabilistic primality test using the Miller-Rabin algorithm
int is_prime(int n, int k) {
    if (n == 2 || n == 3) {
        return 1;
    }
    if (n == 1 || n % 2 == 0) {
        return 0;
    }
    int r = 0;
    int d = n - 1;
    while (d % 2 == 0) {
        r++;
        d /= 2;
    }
    for (int i = 0; i < k; i++) {
        int a = rand_int(n - 3) + 2;
        int x = 1;
        int y = a;
        while (d > 0) {
            if (d % 2 == 1) {
                x = (long long)x * y % n;
            }
            y = (long long)y * y % n;
            d /= 2;
        }
        if (x == 1 || x == n - 1) {
            continue;
        }
        for (int j = 1; j < r; j++) {
            x = (long long)x * x % n;
            if (x == n - 1) {
                break;
            }
        }
        if (x != n - 1) {
            return 0;
        }
    }
    return 1;
}

// Function to perform a randomized selection algorithm
int randomized_select(int *arr, int left, int right, int k) {
    if (left == right) {
        return arr[left];
    }
    int pivot = rand_int(right - left + 1) + left - 1;
    int i = left - 1;
    int j = right + 1;
    int temp;
    while (1) {
        do {
            i++;
        } while (arr[i] < arr[pivot]);
        do {
            j--;
        } while (arr[j] > arr[pivot]);
        if (i >= j) {
            break;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    int m = j - left + 1;
    if (k <= m) {
        return randomized_select(arr, left, j, k);
    } else {
        return randomized_select(arr, j + 1, right, k - m);
    }
}

// Main function
int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Perform a probabilistic primality test
    int n = 123456789;
    int k = 10;
    if (is_prime(n, k)) {
        printf("%d is probably prime.\n", n);
    } else {
        printf("%d is composite.\n", n);
    }
    
    // Perform a randomized selection
    int arr[] = {5, 7, 2, 1, 8, 4, 9, 3, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int kth_smallest = randomized_select(arr, 0, len - 1, 5);
    printf("The 5th smallest element in the array is %d.\n", kth_smallest); 
    return 0;
}
