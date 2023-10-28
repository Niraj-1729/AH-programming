// Problem Link :- https://practice.geeksforgeeks.org/problems/reverse-a-string/1?page=1&difficulty[]=-1&sortBy=submissions

// Solution Class :-

class Solution
{
    public:
    string reverseWord(string str)
    {
        int n=str.size();
        
        int s=0;
        int e=n-1;
        
        while(s<e){
            swap(str[s],str[e]);
            s++;
            e--;
        }
        
        return str;
    }
};
