#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
#define ll long long ;
void solve(){
  long long n,k;
  cin>>n>>k;
  long long arr[n];
  long long mini = LONG_LONG_MAX;
  bool flag = false;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    long long ans = arr[i]%k;
    mini = min(ans,mini);
    if(arr[i]>=k){
      flag = true;
    }
  }
  if(flag==false){
    cout<<"-1"<<endl;
  }
  else{
    cout<<mini<<endl;
  }


  

}
