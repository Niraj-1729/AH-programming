// 2 stack using a array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top1;
    int top2;

public:
    Stack(int size){
        arr= new int[size];
        this->size=size;
        top1=-1; //means initially empty
        top2=size; // initally empty
    }
    void push1(int data){ 
        if(top2-top1==1){
            cout<<"OVERFLOW in stack 1"<<endl;
        }
        else {
            top1++;
            arr[top1]=data;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"UNDERFLOW in stack 1"<<endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }
    }

    void push2(int data){
        if(top2-top2==1){
            cout<<"OVERFLOW in stack 2"<<endl;
        }
        else {
            top2--;
            arr[top2]=data;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"UNDERFLOW in stack 2";
        }
        else {
            arr[top2]=0;
            top2++;
        }

    }

    void print(){
        cout<<endl;
        cout<<"top1 "<<top1<<endl;
        cout<<"top2 "<<top2<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        

    }

};

int main()
{
    Stack st(10);

    st.push1(10);
    st.print();
    st.push1(20);
    st.print();
    st.push1(30);
    st.print();
    st.push1(40);
    st.print();
    st.push1(50);
    st.print();

    st.push2(100);
    st.print();
    st.push2(90);
    st.print();
    st.push2(80);
    st.print();
    st.push2(70);
    st.print();
    st.push2(60);
    st.print(); 
    st.pop1();
    st.print();
    st.pop1();
    st.print();
    st.pop1();
    st.print();
    st.pop1();
    st.print();
    st.pop1();
    st.print();
    st.pop1();
    // st.print();
     

    return 0;
}