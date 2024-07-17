//write a progam to find the  max element from the list

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];  

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {80, 20, 30, 40, 60}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int maxElement = findMax(arr, size); 

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
