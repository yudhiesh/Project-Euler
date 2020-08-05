#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std;

int multiple(int n){
  int sum = 0;
  for(int i = 0; i < n; ++i){
    if(i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;

}

int main(){
  int n;
  cin >> n;
  cout << multiple(n) << endl;


}
