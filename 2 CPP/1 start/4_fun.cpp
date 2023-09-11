#include <iostream>
using namespace std;

// function declared above main method and now can define function anywhere
// above or below main method

//-----------function declaration------------------------
void myFunction();
void myFunction(string fname);
void myCountry(string desh);

//------------main method-------------------------------
int main()
{
    myFunction();
    myFunction("Niraj");
    myFunction("saanvi");
    myFunction("Aastha");
    myFunction("Harsh");
    myCountry("India");
    myCountry("Japan");
    // myCountry();
    myCountry("Canada");

    return 0;
}

//-------***function definition***---------------------


//function with no argument 
void myFunction()
{
    cout << "I got executed !\n";
}

//function with argument
void myFunction(string fname)
{
    cout << fname << " Refresh\n";
}

// default function
void myCountry(string desh = "Norway")
{
    cout << desh << "\n";
}

//function with 

 
