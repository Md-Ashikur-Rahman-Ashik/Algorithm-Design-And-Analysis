#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int integerArray[], int arraySize, int desiredNumber)
{
    int l = 0;             // Initialized left index
    int r = arraySize - 1; // Initialized right Index

    while (l <= r)
    {                          // Checks if l is less than or equal to r
        int mid = (l + r) / 2; // Calculates mid index

        if (integerArray[mid] == desiredNumber)
        {             // Checks if the value of mid index is equal to desired number
            return true; // If value of mid index is equal to desired number, true will be returned
        }
        else if (integerArray[mid] > desiredNumber)
        {                // Checks if the value of mid is greater than desired number
            r = mid - 1; // The right index will be the previous index of mid
        }
        else
        {                // The value of mid is less than the desired number
            l = mid + 1; // the left index will be the next index of mid
        }
    }

    return false;  // If the value is not found, false will be returned
}

int main()
{
    int arraySize;    // Declared a variable to store array size
    cin >> arraySize; // Taken input of array size

    int integerArray[arraySize]; // Declared an array of array size
    for (int i = 0; i < arraySize; i++)
    { // Taken input of array
        cin >> integerArray[i];
    }

    int desiredNumber;    // Declared varible to store desired number
    cin >> desiredNumber; // Taken input of desired number

    bool flag = BinarySearch(integerArray, arraySize, desiredNumber);   // Called Binary Search function

    if (flag == true)
    { // If the value of flag is true, the output will be Yes
        cout << "Yes\n";
    }
    else
    { // If the value of flag is false, the output will be No
        cout << "No\n";
    }

    return 0;
}
