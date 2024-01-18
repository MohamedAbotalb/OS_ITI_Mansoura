#include <iostream>

using namespace std;

/* Create a dynamic array (get size from user, scan data and print them) */

int main()
{
    int arraySize, i;

    do {
       cout << "Please enter the array size: ";
       cin >> arraySize;
    } while (arraySize < 1);

    int* ptrArray = new int[arraySize];

    cout << "Please enter the array values:" << endl;

    for (i = 0; i < arraySize; i++)
        cin >> ptrArray[i];

    cout << "Array Values:" << endl;

    for (i = 0; i < arraySize; i++)
        cout << ptrArray[i] << endl;

    delete [] ptrArray;

    return 0;
}
