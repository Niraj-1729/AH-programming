#include <bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }

        int ans = s.size();
        nums.clear();
        for (auto i : s)
            nums.push_back(i);
        return ans;
    }
};

class solution2
{
public
    int removeDuplicates(int[] nums)
    {
        int j = 1;
        for (int i = 0; i < nums.length - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[j] = nums[i + 1];
                j++;
            }
        }
        return j;
    }
};

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}