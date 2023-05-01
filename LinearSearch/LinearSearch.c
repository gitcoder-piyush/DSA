#include <stdio.h>
int main(){
    int arr [] = {87,90,45,31,56,90};
    int length = sizeof(arr)/sizeof(arr[0]);
    int i;
    int nCount = 0;
    int n;
    printf("enter n \n");
    scanf("%d",&n);
    for (i = 0; i<length; i++){
        if (arr[i]==n){
            printf("element %d is present at index %d \n", n,i);
            nCount += 1;
        }
        if (i == length-1 && nCount == 0){
            printf("element not found");
        }
    }
    
}
