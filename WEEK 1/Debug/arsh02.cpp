                                                /// Assuming you want to delete the element at index 2



//     int indexToDelete = 2;

//    for (int i = indexToDelete; i < arraySize - 1; i++) {
//        myArray[i] = myArray[i + 1];
//     }

//     arraySize--;                              // rredduce the size of the array





#include <iostream>
using namespace std;

// Function to print the elements of an array
void printArray(int arr[], int size) {
    cout << "array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Create an array
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = 5;

    // choose an element to delete (e.g., element at index 2)
    int indexToDelete = 2;

    // Dwlete the element and shift the rest of the elements
    for (int i = indexToDelete; i < arraySize - 1; i++) {
        myArray[i] = myArray[i + 1];
    }

    arraySize--; // Reduce the size of the array

    // Define  a fu nction that can operate on the modified array
    // For example we just print the array
    printArray(myArray, arraySize);

    return 0;
}