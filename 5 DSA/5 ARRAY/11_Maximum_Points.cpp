// Maximum Points You Can Obtain from Cards
// Problem link:
// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

#include <bits/stdc++.h>
using namespace std;

// Approach 1:
// Prefix Sum
class Solution {
public:
     
    int maxScore(vector<int>& cardPoints, int k) {
       
        int n = cardPoints.size();
        
        vector<int> prefix_sum(n+1);
        
        prefix_sum[1] = cardPoints[0];
        for(int i = 1; i < n; i++)
        {
            prefix_sum[i+1] =  prefix_sum[i] + cardPoints[i];
        }
        
        int middle_sum = prefix_sum[n];
        for(int i = n-k; i <= n; i++)
        {
            middle_sum = min(middle_sum, prefix_sum[i]-prefix_sum[i-(n-k)]);
        }
        
        return prefix_sum[n]-middle_sum;
        
    }
};

 // Approach 2:
 // Sliding Window
class Solution {
public:
        int l = 0, r = n-k;
        int tot_sum = accumulate(cardPoints.begin()+r, cardPoints.end(), 0LL);
        int sum = tot_sum;
        while(k--)
        {
            tot_sum += cardPoints[l++] - cardPoints[r++];
            sum = max(sum, tot_sum);
        }
        return sum;
    }
};
