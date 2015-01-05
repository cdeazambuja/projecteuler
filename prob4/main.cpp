#include <iostream>
#include <cmath>

using namespace std;


int Reverse(int num) {
  int inverted_num = 0;
  int last_num = 0;

  while (num) {
    last_num = num % 10;
    num = num / 10;
    inverted_num = inverted_num * 10 + last_num;
  }
  return inverted_num;
}


int IsPalindrome(int num) {
  return Reverse(num) == num;
}

int LargestPalindromeProduct(int digits) {
  int num = pow(10, digits);
  int max = 0;
  int candidate = 0;

  for (int i = 3; i < num; i++) {
    for (int j = 3; j < num; j++) {
      candidate = i * j;
      if (IsPalindrome(candidate) and candidate > max)
        max = candidate;
    }
  }

  return max;
}

int main() {
  cout << LargestPalindromeProduct(3) << endl;
  return 0;
}