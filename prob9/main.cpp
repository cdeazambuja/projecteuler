#include <iostream>
#include <cmath>

using namespace std;


int SpecialPythagoreanTriplet(int triple_sum) {
  int c = 1, c2 = 1;

  for (int a = 1; a < triple_sum; a++) {
    for (int b = 1; b < triple_sum; b++) {
      c2 = a * a + b * b;
      c = int(sqrt(c2));
      if ((c + a + b) == triple_sum && c2 % c == 0)
        return a * b * c;
    }
  }

  return -1;
}

int main() {
  cout << SpecialPythagoreanTriplet(1000) << endl;
  return 0;
}