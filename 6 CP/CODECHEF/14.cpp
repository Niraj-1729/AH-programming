// easy pronounciation

#include <iostream>
#include <cstring>
using namespace std;

bool isConsonant(char c) {
    // Check if the character is a consonant (you can modify this condition as needed)
    return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'h') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 't') || (c >= 'v' && c <= 'z');
}

bool hasConsecutiveConsonants(const char* str) {
    int consecutiveCount = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (isConsonant(str[i])) {
            consecutiveCount++;

            if (consecutiveCount == 4) {
                return true;
            }
        } else {
            consecutiveCount = 0;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    // {
    //     int count = 0;
    //     const int MAX_SIZE = 100;
    //     char input[MAX_SIZE];
    //     for (int i = 0; i < count; i++)
    //     {
    //         if (char arr[i] == {a, e, i, o, u})
    //         {
    //             cin.getline(input, MAX_SIZE);
    //             count++;
    //         }
    //         else
    //         {
    //             count == 0;
    //         }
    //     }
    //     if (count >= 4)
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
     const int MAX_SIZE = 100; // Maximum size of the input string

    char input[MAX_SIZE]; // Declare the character array

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_SIZE); // Read user input and store it in the character array

    if (hasConsecutiveConsonants(input)) {
        std::cout << "Difficult to pronounce" << std::endl;
    } else {
        std::cout << "Easy" << std::endl;
    }
    }
    return 0;
}
