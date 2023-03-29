// Write a program to reverse an array or string
// Difficulty Level : Basic
// Last Updated : 30 Jan, 2023
// Read
// Discuss(200+)
// Courses
// Practice
// Video

 
// Given an array (or string), the task is to reverse the array/string.
// Examples : 
 

// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}

// Input :  arr[] = {4, 5, 1, 2}
// Output : arr[] = {2, 1, 5, 4}


//  Answer 1: By reversing loop
#include <stdio.h>

int main(){
    int arr[] ={2,4,1,6,7};
    int n = 5;
    int i;
    for (i = n-1; i>=0; i--){
        printf("%d", arr[i]);
        printf(" ");
    }
}

// Answer 2: By swapping
#include <stdio.h>

int main(){
    int arr[] ={2,4,1,6,7};
    int n = 5;
    int i;
    int temp;
    for (i =0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
    int j;
    for (j =0; j<n; j++){
        printf("%d", arr[j]);
        printf(" ");
    }

}

