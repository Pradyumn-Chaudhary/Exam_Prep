#include<stdio.h> 

int main(){
    int arr[] = {9, 5, 2, 4, 6, 1};
    for (int i = 0; i < 6 - 1;i++){
        int swapped = 0;
        for (int j = 0; j < 6 - i - 1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if(!swapped){
            break;
        }
    }
    for (int i = 0; i < 6;i++){
        printf("%d\t", arr[i]);
    }
        return 0;
}