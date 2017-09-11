#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int raiz = (int) ceil(sqrt(n));
  while(true) {
    if(n % raiz == 0) {
        cout << n / raiz << ' ' << raiz << endl;
        break;
    }
    raiz++;
  }
}
