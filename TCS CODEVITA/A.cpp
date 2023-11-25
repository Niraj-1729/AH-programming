#include <iostream>
#include <vector>
#include <algorithm>

int minSwapsToMakeBeautiful(const std::vector<int> &arr)
{
    int ascCount = 0, descCount = 0;
    int n = arr.size();

 
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            ++ascCount;
        }
    }

   
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] < arr[i + 1])
        {
            ++descCount;
        }
    }
 
    return std::min(ascCount, descCount);
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4};  

    int minSwaps = minSwapsToMakeBeautiful(arr);
    std::cout << "Minimum swaps required: " << minSwaps << std::endl;

    return 0;
}
