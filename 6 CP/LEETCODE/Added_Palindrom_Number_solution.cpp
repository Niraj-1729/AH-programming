//problem link - https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        long long int ans=x;
        long long int rem,res=0;
        while(ans>0){
            rem=ans%10;
            ans=ans/10;
            res=res*10+rem;
        }
        if(res<x){
            return false;
        }
        if(res==x){
            return true;
        }
        return false;
    }
};
