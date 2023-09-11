 // Declare and initialize strings
    string str1 = "Hello";
    string str2(" World!");

    // Concatenate strings using + operator
    string concatenatedStr = str1 + str2;

    // Get the length of the string
    int length = concatenatedStr.length();

    // Access individual characters using indexing
    char firstChar = concatenatedStr[0];

    // Find a substring within a string
    size_t found = concatenatedStr.find("World");

    // Check if the substring was found
    if (found != string::npos) {
        cout << "Substring 'World' found at index " << found << endl;
    } else {
        cout << "Substring 'World' not found." << endl;
    }

    // Replace a substring within a string
    concatenatedStr.replace(found, 5, "Universe");

    // Convert the string to uppercase
    for (char& c : concatenatedStr) {
        c = toupper(c);
    }

    // Check if the string is empty
    if (concatenatedStr.empty()) {
        cout << "The string is empty." << endl;
    } else {
        cout << "Modified string: " << concatenatedStr << endl;