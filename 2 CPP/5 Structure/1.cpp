#include<iostream>
using namespace std;

struct employee {
   //data
   int eId;
   char favChar;
   float salary;

};

int main () {
    struct employee harry;

    harry.eId=1;
    harry.favChar= 'c';
    harry.salary= 1200000.00; 
    cout<<harry.eId<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;
    return 0;
}