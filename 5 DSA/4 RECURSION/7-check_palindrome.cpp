#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const char *str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (str[start] == str[end])
    {
        return isPalindrome(str, start + 1, end - 1);
    }
    else
    {
         return false;
    }
    
}

int main()
{
    // Example usage
    const char *input = "radar";

    if (isPalindrome(input, 0, strlen(input) - 1))
    {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}