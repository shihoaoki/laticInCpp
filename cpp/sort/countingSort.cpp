#include <iostream>
using namespace std;

int Max(int Arr[], int N){
    int max = Arr[0];
    for(int i=1; i<N; i++)
        if(Arr[i]>max)
            max = Arr[i];
    return max;
}

int Min(int Arr[], int N){
    int min = Arr[0];
    for(int i=1; i<N; i++){
        if(Arr[i] < min){
            min = Arr[i];
        }
    }
    return min;
}