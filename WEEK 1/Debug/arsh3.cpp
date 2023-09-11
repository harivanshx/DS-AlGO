#include <iostream>
using namespace std;

// function to perform the bubble sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// function to print the elements of an array
void printArray(int arr[], int size)
{
    cout << "sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ccreate an array
    int myArray[] = {64, 25, 12, 22, 11};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // perform bubble sort on the array
    bubbleSort(myArray, arraySize);

    // poass the sorted array to a function for printing
    printArray(myArray, arraySize);

    return 0;
}
