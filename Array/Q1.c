// Find a peak element which is not smaller than its neighbours

// Given an array arr[] of integers. Find a peak element i.e. an element that is not smaller than its neighbors. 

// Note: For corner elements, we need to consider only one neighbor. 

// Example:

// Input: array[]= {5, 10, 20, 15}
// Output: 20
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.

// Input: array[] = {10, 20, 15, 2, 23, 90, 67}
// Output: 20 or 90
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20, similarly 90 has neighbors 23 and 67.


#include <stdio.h>
int main(){
    int arr[]= {10,20,15,2,23,90,67};
    int i;
    for(i =1;i<6;i++){
        if (arr[i]>arr[i-1] && arr[i]> arr[i+1]){
            printf("%d \n", arr[i]);
        }
    }
}
