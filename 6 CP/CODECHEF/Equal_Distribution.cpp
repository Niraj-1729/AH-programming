#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) { 
	    int x,y,z;
	    cin>>x>>y;
	    z=(x+y)/2;
	    if(z % 2 == 0)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
