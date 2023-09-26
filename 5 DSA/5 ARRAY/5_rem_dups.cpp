#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    int *arra= new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]=arr[i+1])
        {
            arr[i]=arra[i];
        }
        
    }
    
    

    return 0;
}