#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
         
    }
            return -1;
}

int main()
{
    int arr[] = {12, 1, 68, 32, 54, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the number:";
    cin >> key;
    int position = findElement(arr, n, key);
    if (position == -1)
    {
        cout << "Element not found" << endl;
    }

    else
    {
        cout << "element found at position:" << position + 1;
    }

    return 0;
}