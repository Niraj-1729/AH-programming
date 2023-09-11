// watermelon question codeforces 
#include <iostream>

int main() {
    int number;
    
    while (true) {
        std::cout << "Enter a positive number (or 0 to exit): ";
        std::cin >> number;
        
        if (number == 0) {
            break;
        }
        
        if (number == 2 || number % 2 != 0) {
            std::cout << "No" << std::endl;
        } else {
            std::cout << "Yes" << std::endl;
        }
    }
    
    return 0;
}
