#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(long num) {
  if (num == 1)
    return false;
  else if (num < 4)
    return true;
  else if (num % 2 == 0)
    return false;
  else if (num < 9)
    return true;
  else if (num % 3 == 0)
    return false;
  else {
    long r = long(sqrt(num));
    for (long i = 5; i <= r; i += 6) {
      if (num % i == 0)
        return false;
      if (num % (i + 2) == 0)
        return false;
    }
    return true;
  }
}

long SummationOfPrimes(long limit) {
  long sum = 0;
  for (long i = 2; i < limit; i++) {
    if (IsPrime(i))
      sum += i;
  }
  return sum;
}

int main() {
  cout << SummationOfPrimes(2000000) << endl;
  return 0;
}