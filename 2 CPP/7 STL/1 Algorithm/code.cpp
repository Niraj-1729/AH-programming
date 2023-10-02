#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(9);
    v.push_back(14);

    cout << "Finding 6:- " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b=5;
    cout<<"max->"<<max(a,b);
    cout<<"min->"<<min(a,b);

    swap(a,b);
    cout<<endl<<"a->"<<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string->"<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rtate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}

// As of now choose only DSA and Development , baad me cp try kar lena

// DSA is core and you most have to do it at any cost
// For DSA -

// CPP - basics, oops, STL,
// then DSA
// Lecture: GFG course (you may get it from any senior)
// Practice questions-: Babbar Sheet ( all questions topic wise )
// And practice at leetcode ( for DSA)
