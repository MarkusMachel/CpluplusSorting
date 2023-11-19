#include <iostream>

void bubbleSort(int array[], int size);

int main() {
    //bubblesort
    int arr[] = { 5, 1, 4, 2, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int element: arr) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    bubbleSort(arr, size);

    for (int element: arr) {
        std::cout << element << " ";
    }

    return 0;
}

void bubbleSort(int array[], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (size - i - 1); j++) {
            if (array[j] > array[j + 1]) {
                // swap elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}