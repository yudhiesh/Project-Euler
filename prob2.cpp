#include <iostream>
#include <algorithm>

using namespace std;

long long evenFib(int n){
  long long sum = 2;
  int n1 =1, n2 =2, n3;
  while(n3 < n){
    n3 = n2 + n1;
    if(n3 % 2 == 0){
      sum += n3;
    }
    n1 = n2;
    n2 = n3; 
  }
  return sum; 

}

int main(){

  int n;
  cin >> n;

  cout << evenFib(n) << endl;

}
