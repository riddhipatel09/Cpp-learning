//TC=0(n)
//SC=0(n)

#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;
   cout<<i<<endl;

   // Function call to print i till i decrements to 1.
   func(i-1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(n,n);
  return 0;

}
