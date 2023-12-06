#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mapFre(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto x : mpp)
    {
        cout << x.first << " " << x.second << endl;
    }
}

void frequency(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 30, 40, 50, 60, 10, 20, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    // frequency(arr,n);
    mapFre(arr, n);
    return 0;
}