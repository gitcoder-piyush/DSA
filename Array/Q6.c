// Count number of occurrences (or frequency) in a sorted array
// Difficulty Level : Medium
// Last Updated : 31 Mar, 2023
// Read
// Discuss(50+)
// Courses
// Practice
// Video

 
// Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]. Expected time complexity is O(Logn) 

// Examples: 
//   Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
//   Output: 4 // x (or 2) occurs 4 times in arr[]

//   Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 3
//   Output: 1 

//   Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 1
//   Output: 2 

//   Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 4
//   Output: -1 // 4 doesn't occur in arr[] 

#include <stdio.h>
int main(){
    int n;
    printf("enter n: \n");
    scanf("%d", &n);
    int arr[n];
    int i;
    int num;
    for(i = 0; i < n; i++){
        printf("enter num: \n");
        scanf("%d", &num);
        arr[i] = num;
    }
    int number;
    printf("enter a number to search");
    scanf("%d", &number);
    int j;
    int count = 0;
    for(j = 0; j < n; j++){
        if (arr[j]==number){
            count = count + 1;
        }
    }
    printf("occurance of %d is %d \n", number,count);
}
