//Problem link :- https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions

class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        vector<int> a;
        unordered_map<long long, int> map;
        long long csum = 0;

        for (int i = 0; i < n; i++)
        {
            csum += arr[i];

            if (csum - s == 0)
            {
                a.push_back(1);
                a.push_back(i + 1);
                return a;
            }

            if (map.find(csum - s) != map.end())
            {
                a.push_back(map[csum - s] + 1);
                a.push_back(i + 1);
                return a;
            }
            map[csum] = i + 1;
        }
        a.push_back(-1);
        return a;
    }
};
