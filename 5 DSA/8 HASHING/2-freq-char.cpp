//frequency of lowercase character 

#include<iostream>
using namespace std;

int main (){

    string s;
    cin>>s;
    //pre-compute
    int hash[25]={0};
    for (int i = 0; i <s.size(); i++)
    {
        hash[s[i]-'a']++;
        // hash[s[i]]++; for upper and lower case both
    }
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
        // cout<<hash[c]<<endl; for both upper and lower case 

    }
    
    


    return 0;
}