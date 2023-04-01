// Sort an array of 0s, 1s and 2s | Dutch National Flag problem
// Difficulty Level : Medium
// Last Updated : 15 Feb, 2023
// Read
// Discuss(340+)
// Courses
// Practice
// Video

// Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

// This problem is also the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra. The problem is as follows:

// Given N balls of colour red, white or blue arranged in a line in random order. You have to arrange all the balls such that the balls with the same colours are adjacent with the order of the balls, with the order of the colours being red, white and blue (i.e., all red coloured balls come first then the white coloured balls and then the blue coloured balls). 

// Examples:

// Input: {0, 1, 2, 0, 1, 2}
// Output: {0, 0, 1, 1, 2, 2}

// Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
// Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

#include <stdio.h>
int main(){
    
    // array input
    
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
    
    // taking count
    
    int count0, count1, count2;
    count0 = 0;
    count1 = 0;
    count2 = 0;
    
    int j;
    for (j = 0; j < n; j++){
        if (arr[j]==0){
            count0 = count0 +1;
        }
        else if (arr[j]==1){
            count1 = count1 +1;
        }
        else if (arr[j]==2){
            count2 = count2 +1;
        }
    }
    
    printf("count0: %d, count1: %d, count2: %d", count0, count1, count2);
    printf("\n");
    
    // updating values as per count
    
    int k;
    int l;
    int m;
    for(k = 0; k < count0; k++){
        arr[k] = 0;
    }
    for(l = count0; l < (count0+count1); l++){
        arr[l] = 1;
    }
    for(m = (count0+count1); m < n; m++){
        arr[m] = 2;
    }
    
    int x;
    for(x=0; x < n; x++){
        printf("%d", arr[x]);
        printf(" ");
    }
    return 0;
}
