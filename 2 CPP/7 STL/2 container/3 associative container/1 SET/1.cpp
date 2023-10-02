#include <iostream>
#include<set>
using namespace std;

int main()
{
    //sorted order in set 
    // only insertion and deletion 
    // implemetation of BST
    // contains only unique elements
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(7);
    s.insert(9);
    s.insert(9);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    for(int i: s){
        cout<<i<<" "<<endl;
    }
    cout<<endl;

    set<int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<endl;
    } 

    cout<<endl;
    cout<<"-5 is present ir not: "<<s.count(-5)<<endl;
    set<int> :: iterator itr=s.find(5);
     for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
     }
     cout<<endl;

    


    return 0;
}