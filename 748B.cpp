#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, char> lista;
map<char, char>::iterator busca;

char buscar(char c) {
  for (busca = lista.begin(); busca != lista.end(); busca++) {
    if(busca->first == c)
      return busca->second;
    if(busca->second == c)
      return busca->first;
  }
  return '.';
}

int main() {
  string alfa, bravo;
  cin >> alfa >> bravo;
  bool bueno = true;

  for (size_t i = 0; i < alfa.length() && bueno; i++) {
    char x = buscar(alfa[i]);
    char y = buscar(bravo[i]);
    if(alfa[i] != bravo[i]) {
      if(x == '.' && y == '.') {
        lista[alfa[i]] = bravo[i];
      }
      else if (alfa[i] != y || bravo[i] != x)
        bueno = false;
    } else if(x == '.' && y == '.')
      continue;
    else if(alfa[i] != y || bravo[i] != x)
      bueno = false;
  }
  if(bueno) {
    cout << lista.size() << endl;
    for (busca = lista.begin(); busca != lista.end(); busca++) {
      cout << busca->first << ' ' <<  busca->second << endl;
    }
  } else
    cout << "-1" << endl;
}
