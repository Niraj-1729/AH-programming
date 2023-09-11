#include<iostream>
#include<math.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        float x;
        cin>>x;
      float  y=x/4;
        int z = std::ceil(y);
        cout<<z<<endl;
    }
    return 0;
}