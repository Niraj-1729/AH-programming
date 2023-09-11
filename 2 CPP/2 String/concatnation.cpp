#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Niraj";
    string str2 = "Kumar";
    string str3 = "Manas";
    string str4 = "Sir";
    
    cout << "Full name:";
    string fullName = str1 + " " + str2;
    cout << fullName << endl;
    str3.append(str4);

    cout << str3;
    str3.append("Sadhu");
    cout << str3;

    return 0;
}