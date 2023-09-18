#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (s.at(i) == 'A' || s.at(i) == 'E' || s.at(i) == 'O' || s.at(i) == 'U')
        {
            s.erase(i);
            if (isupper(c))

            {
                s[i] = tolower(c);

                if (std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && std::tolower(c) != 'o' && std::tolower(c) != 'u')
                {
                    // If the character is a consonant, add a '.' before it
                    s += '.';
                }
            }
        }
        else if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'o' || s.at(i) == 'u')
        {
            s.erase(i);
            if (isupper(c))

            {
                s[i] = tolower(c);

                if (std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && std::tolower(c) != 'o' && std::tolower(c) != 'u')
                {
                    // If the character is a consonant, add a '.' before it
                    s += '.';
                }
            }
        }

        
    }

    cout << s;

    return 0;
}