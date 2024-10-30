#include <iostream>
using namespace std;

// Sorts the array using Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key into sorted position
    }
}

// Partitions the array for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    // Move elements < pivot to the left of the pivot
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in its final position
    return i + 1;
}

// Recursively sorts partitions in Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);        // Sort elements before partition
        quickSort(arr, pi + 1, high);       // Sort elements after partition
    }
}

// Prints the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[25] = {34, 7, 23, 32, 5, 62, 31, 1, 22, 10, 20, 45, 12, 30, 18, 8, 26, 13, 9, 50, 55, 2, 48, 3, 15};

    // Initial unsorted array
    cout << "Original array: ";
    printArray(arr, 25);

    // Sort using Insertion Sort
    insertionSort(arr, 25);
    cout << "Array after Insertion Sort: ";
    printArray(arr, 25);

    // Restore array to original state for Quick Sort demonstration
    int arr2[25] = {34, 7, 23, 32, 5, 62, 31, 1, 22, 10, 20, 45, 12, 30, 18, 8, 26, 13, 9, 50, 55, 2, 48, 3, 15};

    // Sort using Quick Sort
    quickSort(arr2, 0, 24);
    cout << "Array after Quick Sort: ";
    printArray(arr2, 25);

    return 0;
}
