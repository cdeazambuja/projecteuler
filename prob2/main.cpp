#include <iostream>

using namespace std;


// Returns the sum of the even fibonacci numbers less than the limit given.
// 1  1  2  3  5  8  13
// f0 f1 f2
//    f0 f1 f2
int EvenFibonacci(int limit) {
  int f0 = 1, f1 = 1;
  int f2 = 0;

  int even_sum = 0;
  while (f2 < limit) {
    f2 = f0 + f1;
    f0 = f1;
    f1 = f2;
    if (f2 % 2 == 0)
      even_sum += f2;
  }

  return even_sum;
}

int main() {
  cout << EvenFibonacci(4000000) << endl;
  return 0;
}