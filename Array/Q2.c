// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

// Example 1:

// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output:
// min = 1, max =  10000
 

// Example 2:

// Input:
// N = 5
// A[]  = {1, 345, 234, 21, 56789}
// Output:
// min = 1, max = 56789
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function getMinMax() which takes the array A[] and its size N as inputs and returns the minimum and maximum element of the array.

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
    
    int p;
    for (p = 0; p < n; p++){
        printf("%d", arr[p]);
        printf(" ");
    }
    
    int j;
    int min = arr[0];
    int max = arr[0];
    for (j = 0; j < n; j++){
        if (arr[j]<min){
            min = arr[j];
        }
        else if(arr[j]>max){
            max = arr[j];
        }
    }
    printf("\n");
    printf("min: %d \n", min);
    printf("max: %d", max);

    
    return 0;
} 
