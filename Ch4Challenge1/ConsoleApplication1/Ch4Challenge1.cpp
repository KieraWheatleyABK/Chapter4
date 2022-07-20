// Ch4Challenge1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void DisplayArray(int arr[], int size);
void DisplayLargestValue(int arr[], int size);
int GetLargestValue(int arr[], int size);

void DisplayArray(int arr[], int size)
{
    cout << "The array contents are: {";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i] << "}" << endl;
        }      
    }
}

void DisplayLargestValue(int arr[], int size)
{
    cout << "The largest value in the array is " << GetLargestValue(arr, size) << "." << endl;
}

int GetLargestValue(int arr[], int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int a[] = { 100, 1000, -4, 10, 300 };
    size_t n = sizeof(a) / sizeof(a[0]);

    DisplayArray(a, n);
    DisplayLargestValue(a, n);
}