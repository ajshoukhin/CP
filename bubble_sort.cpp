#include <iostream>
using namespace std;

void takeArray(int arr[], int n){
     for(int i=0; i<n; i++){
        cin >> arr[i];
     }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
} 

void bubbleSort(int arr[], int n){
    int cont=0;
    for(int i = 0; i< n-1; i++){
        int swp = 0;
        for(int j=0; j < n-1-i; j++){
            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            swp = 1;

            }
        }
        if(swp == 0){
            break;
        }
        cont++;
    }
    cout << "Steps: " << cont << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    takeArray(arr, n);
    
    cout << "Before Sorting: " << endl;
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "After Sorting: " << endl;
    printArray(arr, n);

    return 0;
}