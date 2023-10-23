//problem link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         auto ip=unique(nums.begin(),nums.end());
        int n=nums.size();
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        return s.size();
    }
};
