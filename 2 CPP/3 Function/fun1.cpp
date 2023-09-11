#include<iostream> 
using namespace std;

int max(int x, int y){
    if(x>y){
        return x;
    }

    else return y;
}


int main (){
      int a,b;
      cin>>a>>b;
      max(a,b);
      cout<<max(a,b)<<endl;

    return 0;
}