#include <bits/stdc++.h>
using namespace std;

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

    bool flag = false; // Declared variable to track desired number
    for (int i = 0; i < arraySize; i++)
    { // Traversing the entire array to find desired number
        if (integerArray[i] == desiredNumber)
        {                // Checking if the value of this index is the desired number
            flag = true; // If the current number is desired number, the value of flag will be true
            break;       // If the number is found, we will break the loop
        }
    }

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
