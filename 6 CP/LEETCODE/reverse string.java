//https://leetcode.com/problems/reverse-words-in-a-string/description/
class Solution {
    public String reverseWords(String s) {
        String str = s.trim() + " ";
        String sNew = "";
        int prevIdx = str.length();

        for(int i = str.length() - 1; i >= 0; i--) {
            char c = str.charAt(i);
           
            if(c == ' ') {
               sNew += s.substring(s.charAt(i + 1), prevIdx);
               prevIdx = i;
            }
        }

        return sNew;
    }
}