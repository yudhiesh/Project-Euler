#include <iostream>

using namespace std;

// say n = 131195
// z = 2
// n / z = remainder of 1
// now n is not divisible by 3 or 4
// but when z = 5 
// remainder / 5 = 0
// 

void largestPrimeFactor(long long n){
  long long z = 2;
  while(z * z <= n){
    if(n % z == 0){
      cout << z << endl;
      n /= z; 
    }
    else{
      z++; 
    }
  
  }
  if(n > 1){
    cout << n << endl;
  }
  
}

int main(){

  long long  n ;
  cin >> n;

  largestPrimeFactor(n);

}
