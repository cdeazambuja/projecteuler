#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int SumSquareDifference(int num) {
  int sum1 = 0;
  for (int i = 1; i <= num; i++)
    sum1 += i * i;

  int sum2 = 0;
  for (int i = 1; i <= num; i++)
    sum2 += i;
  sum2 *= sum2;

  return sum2 - sum1;
}

int main() {
  cout << SumSquareDifference(100) << endl;
  return 0;
}