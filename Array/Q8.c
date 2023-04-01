// Find Subarray with given sum | Set 1 (Non-negative Numbers)
// Difficulty Level : Medium
// Last Updated : 23 Feb, 2023
// Read
// Discuss(340+)
// Courses
// Practice
// Video

// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.

// Note: There may be more than one subarray with sum as the given sum, print first such subarray. 

// Examples: 

// Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
// Output: Sum found between indexes 2 and 4
// Explanation: Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33

// Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
// Output: Sum found between indexes 1 and 4
// Explanation: Sum of elements between indices 1 and 4 is 4 + 0 + 0 + 3 = 7

// Input: arr[] = {1, 4}, sum = 0
// Output: No subarray found
// Explanation: There is no subarray with 0 sum

#include <stdio.h>

int main() {
    
    int n;
    printf("enter n: \n");
    scanf("%d", &n);
    int arr[n];
    int k;
    int num;
    for(k = 0; k < n; k++){
        printf("enter num: \n");
        scanf("%d", &num);
        arr[k] = num;
    }
    
    int i, j;
    int sum;
    printf("enter sum");
    scanf("%d", &sum);
    
    for (i = 0; i < n; i++){
        int add = 0; // initiates add at every loop
        for (j = i; j < n; j++){ 
            add = add + arr[j];
            if (add == sum){
                printf("index %d to index %d", i, j);
            }

        }
        if (i == n-1 && add != sum){
            printf("\n");
            printf("not present");
        }


    }
    

    return 0;
}
