#include <iostream>
using namespace std;

int main() {
  int N, m, max = 0, nes = 0;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> m;
    if(m > max) {
      nes += (i - 1) * (m - max);
      max = m;
    } else
      nes += max - m;
  }
  cout << nes << endl;
}
