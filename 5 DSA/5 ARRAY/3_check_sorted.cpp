#include<iostream>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i; i<n-1; i++){
            if(arr[i]<=arr[i+1]){
                return 1;
            }
        }
        return 0;
    }
};
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
 
 
 return 0;
}