#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    for(int j=low; j<high; j++){
        if (arr[j]<=pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return(i + 1);
}