// K’th Smallest/Largest Element in Unsorted Array
// Difficulty Level : Medium
// Last Updated : 20 Feb, 2023
// Read
// Discuss(220+)
// Courses
// Practice
// Video

// Given an array and a number K where K is smaller than the size of the array. Find the K’th smallest element in the given array. Given that all array elements are distinct.

// Examples:  

// Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 3 
// Output: 7

// Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 4 
// Output: 10 

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
  
printf("\n");
int k; 
printf("enter k \n");
scanf("%d", &k);
printf("\n");
printf("%d", arr[k]);




    return 0;
}
