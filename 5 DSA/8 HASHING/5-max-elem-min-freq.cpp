// Find maximum element among the elements with minimum frequency in given Array

#include <bits/stdc++.h>
using namespace std;

int maxElementWithMinFreq(int *arr, int N)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < N; i++)
    {
        mpp[arr[i]]++;
    }

    int minFreq= INT_MAX;
    int maxVal= INT_MIN;
    for (auto x:mpp)
    {
        int num=x.first;
        int freq=x.second;

        if (freq<minFreq)
        {
            minFreq=freq;
            maxVal=num;
        }
        else if(freq==minFreq && maxVal<num){
            maxVal=num;
        }
        
    }
    return maxVal;
}

int main()
{
    int arr[]={2,2,3,4,3,5,6,4,7,6};
    int N = sizeof(arr)/sizeof(arr[0]);
    cout<<maxElementWithMinFreq(arr,N);
    return 0;
}