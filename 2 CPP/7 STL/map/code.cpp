#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;
    //print value always in sorted 
    m[1]="Artificial";
    m[13]="Niraj";
    m[2]="Human";

    m.insert({5,"Love"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<m.count(-13)<<endl;
    }

    // m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<endl;
    auto it= m.find(5);
    for ( auto i= it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}