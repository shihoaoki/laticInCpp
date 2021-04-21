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

void Print(int Arr[], int N){
    for(int i = 0; i<N; i++){
        cout << Arr[i] << ", ";
    }
    int *Counting_Sort(int Arr[], int N){
        int max = Max(Arr, N);
        int *Sorted_Arr = new int[i];
        int *Count = new int[max-min + 1];
        
        for(int i=0; i<N; i++)
            Count[Arr[i]-min]++;
        for(int i=1; i<(max-min+1); i++)
            Count[i] += Count[i-1];
        for(int i=N-1; i>=0; i--){
            Sorted_Arr[Count[Arr[i] -min] -1] = Arr[i];
            Count[Arr[i] - min] --;
        }
        return Sorted_Arr;
    }
}
