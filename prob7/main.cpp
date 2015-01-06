#include <iostream>
#include <cmath>

using namespace std;


bool IsPrime(int num) {
  int root = sqrt(num);

  for (int i = 2; i <= root; i++) {
    if (num % i == 0)
      return false;
  }
  if (num == 0 || num == 1)
    return false;
  else
    return true;
}

int StPrime(int num) {
  int last_prime = 2;
  int i = 0;

  while (num) {
    if (IsPrime(i)) {
      last_prime = i;
      num--;
    }
    i++;
  }

  return last_prime;
}

int main() {
  cout << StPrime(10001) << endl;
  return 0;
}
