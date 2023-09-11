#include <iostream>
using namespace std;

int main()
{
     
    
    
      int arr[4];
      int count=0;
      for(int i=0; i<4; i++)
      {
          cin>>arr[i];
      }
      
      for(int j=0; j<4; j++)
      {
          if(arr[j]>=10)
          {
              count++;
          }
      }
      
      cout<<count<<endl;
    return 0;
}