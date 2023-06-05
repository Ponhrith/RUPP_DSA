#include<iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2){
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int first_ind, int last_ind, int pivot){
    int i = first_ind;
    int j = first_ind;
    while(i <= last_ind){
        if(arr[i] <= pivot){
            swap(arr, i, j);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int first_ind, int last_ind){
    if(first_ind < last_ind){
        int pivot = arr[last_ind];
        int pos = partition(arr, first_ind, last_ind, pivot);

        quickSort(arr, first_ind, pos-1);
        quickSort(arr, pos+1, last_ind);
    }
}

int main(){
    int arr[] = {8, 15, 4, 3, 18, 7, 1, 4};
    int first_index = 0;
    int last_index = 7;
    int pivot = arr[last_index];
    quickSort(arr, first_index, last_index);

    // Print sorted array
    for(int i = 0; i <= last_index; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
