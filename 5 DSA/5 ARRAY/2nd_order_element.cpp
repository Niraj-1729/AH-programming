#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]; // syntax of DMA of variable length of array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout<<arr[1]<<" "<<arr[n-2]<<endl;

    return 0;
}

// done with this problem but problem with this is 
// 1. Time complexity
// 2. Use vector insted of array 
// apply another approach insted of sorting and reduce time complexity

