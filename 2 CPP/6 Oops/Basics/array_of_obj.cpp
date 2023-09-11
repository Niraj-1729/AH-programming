#include<iostream>
using namespace std;

class Employee {
     int E_id, E_salary;
     char E_name[30];
     public: 
     void input(){
            cout<<"Enter details of Employee"<<endl;
            cin>>E_name>>E_salary>>E_id;
     }
     void display() {
            cout<<"Employe id is: "<< E_id<<endl;
            cout<<"Employe Salary is: "<< E_salary<<endl;
            cout<<"Employe id name: "<< E_name<<endl;

     }
};

int main (){
    Employee obj[3];   // for multiple employee 
    // Employee obj;  for one employee only 
    int i;
    for (int i = 0; i < 3; i++)
    {
        obj[i].input();
    }
    for (int i = 0; i < 3; i++)
    {
        obj[3].display();
    }
    

    

}