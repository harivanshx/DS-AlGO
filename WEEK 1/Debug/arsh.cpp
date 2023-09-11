#include <iostream>
using namespace std;

// Function to double each element in an array
void doubleElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    // Create an array with some numbers
    int myArray[6] = {1, 2, 6, 3, 4, 5};

    // Insert a number (e.g., 10) at a specific position (e.g., position 2)
    int elementToInsert = 10;
    int indexToInsertAt = 2;

    // Shift other numbers to make space for the new number
    for (int i = 5; i >= indexToInsertAt; i--) {
        myArray[i + 1] = myArray[i];
    }

    // Insert the new number
    myArray[indexToInsertAt] = elementToInsert;

    // Double all the numbers in the array
    doubleElements(myArray, 7); // 7 is the new size of the array

    // Print the modified array
    cout << "Modified Array: ";
    for (int i = 0; i < 7; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
