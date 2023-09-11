 #include <iostream>
 #include <string>
 int main() {
    std::string str1 = "Hello, World!"; // Initializing with a string literal
    std::string str2("This is another string."); // Using constructor with a C-style string
    std::string str3 = str1; // Copying a string
    std::string str4; // Empty string declaration

    // Printing the strings
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;
    std::cout << "str4: " << str4 << std::endl;

    return 0;
}

