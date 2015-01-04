#include <iostream>

using namespace std;


int LargestPrimeFactor(unsigned long num) {
  unsigned long factor = 1;
  while (factor <= num) {
    factor++;
    while (num % factor == 0)
      num /= factor;
  }
  // Last factor.
  return factor;
}

int main() {
  cout << LargestPrimeFactor(600851475143) << endl;
  return 0;
}