 #include <iostream>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = 0; i < n; i++) 
        {
            if(arr[i]<=a)
            {
                
                cout<<"1";
                a=a-arr[i];
            }
            else
                cout<<"0";
        }
            cout<<endl;
    }
    return 0;
}
