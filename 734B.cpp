#include <iostream>

using namespace std;

int main() {
  int k2, k3, k5, k6, min, suma;
  cin >> k2 >> k3 >> k5 >> k6;
  min = k5 < k6 ? k5 : k6;
  min = k2 < min ? k2 : min;
  suma = min * 256;
  k2 -= min;
  min = k3 < k2 ? k3 : k2;
  suma += min * 32;
  cout << suma << endl;
}
