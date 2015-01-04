#include <iostream>

using namespace std;


int Multiples(int limit) {
  int sum = 0;
  for (int i = 0; i < limit; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }
  return sum;
}

int main() {
  cout << Multiples(1000) << endl;
  return 0;
}