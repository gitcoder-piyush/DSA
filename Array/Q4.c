// C program to sort an array in ascending order
// Difficulty Level : Easy
// Last Updated : 13 Mar, 2023
// Read
// Discuss
// Courses
// Practice
// Video

// Given an array arr[] of size N, the task is to sort this array in ascending order in C.
// Examples: 

// Input: arr[] = {0, 23, 14, 12, 9}
// Output: {0, 9, 12, 14, 23}

// Input: arr[] = {7, 0, 2}
// Output: {0, 2, 7}

#include <stdio.h>

int main() {
int arr [] = {7,6,2,9,4,-2,0,5};
int n = 8;
int i;
int j;
int min = arr[0];
for(i =0; i<n-1; i++){
    for (j = i+1; j<n; j++){
        if (arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int p;
for(p = 0; p<n; p++){
    printf("%d", arr[p]);
    printf(" ");
}

    return 0;
}
