#include <iostream>
using namespace std;

void isKthBitSet(int n, int k){
    if(n&(1<<(k-1)))
      cout<<"SET"<<endl;
    else 
      cout<<"NOT SET"<<endl;
}

int main()
{
    int a=25, b=3;
    isKthBitSet(a,b);
    return 0;
} 

    //naive approach (convert decimal to binary and then from rhs check weather the bit is set or not)
    //better approach:- divide N by 2 k times and there comes reminder thenit is set else not set 

    //bit masking:-
    //  mask =1  
    //  mask<<=k
    //  (mask & N) !=0 then it is set 

    // step 1:- left shift given number by 1 by k-1 to create a number that has only set bit as kth bit 
    //          (temp=1 <<(k-1))
    //step 2-: (n& temp )== 0 ->kth is unset
    //       (n & temp)!=0   ->kth bit is set

   // eg-: N=27, k=4
   // (27)10= (11011)2
   // initially temp= 1, after we do-> temp = 1<<(k-1)   
   // temp=(1000)
   // bitwise & of n and temp  (n&temp) equi (11011&01000) if =0 kth is unset !=0 kth is unset 