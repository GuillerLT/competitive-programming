#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;
  long long m = 1;
  while (n > m) {
    n -= m;
    ++m;
  }
  cout << n << '\n';
  return 0;
}
