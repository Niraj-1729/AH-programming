#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

bool compare(char c1, char c2) {
    return tolower(c1) > tolower(c2); // Corrected the function name tolower()
}

int main() {
    char arr1[20] = "C++ Program", arr2[20] = "C Program"; // Corrected the array initialization
    cout << lexicographical_compare(arr1, arr1 + strlen(arr1), arr2, arr2 + 5, compare); // Corrected the lexicographical_compare function
    return 0;
}
