#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int count=1;
        sort(arr,arr+n);
        for (int i = 1; i < n; i++) {
            if(arr[i-1]!=arr[i]){
                count++;
                cout<<count<<endl;
            }
            else if (arr[i-1]==arr[i]){
                  n=n-i;
            cout<<n<<endl;
            }
        }
        
    }
    return 0;
}
