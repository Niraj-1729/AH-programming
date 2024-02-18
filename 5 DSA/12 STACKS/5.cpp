// find middle element

#include <iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s, int &totalSize){
    if(s.size()==0){
        cout<<"there is no element in stack";
    }
    //base case
    if(s.size()==totalSize/2+1){
        cout<<"middle element is:"<<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();

    //recursive call
    printMiddle(s,totalSize);

    //backtrack 
    s.push(temp);

}

void deleteMiddle_util(stack<int>&s, int totalSize, int current){
    if(s.size()==0){
        cout<<"there is no element in the stack";
    }
    if(current==totalSize/2){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    deleteMiddle_util(s,totalSize,current+1);

    s.push(temp);
}

void deleteMiddle(stack<int>&s, int totalSize){
     int current=0;
     deleteMiddle_util(s,totalSize,current);
}

int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalSize=s.size(); 
    // printMiddle(s, totalSize);
    deleteMiddle(s,totalSize);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}