#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  string alfa, bravo;
  cin >> alfa >> bravo;
  char lista[26] = "";
  bool bueno = true;

  for (size_t i = 0; i < alfa.length() && bueno; i++) {
    char *x = &lista[alfa[i] - 'a'];
    char *y = &lista[bravo[i]  - 'a'];
    if(*x == '\0' && *y == '\0') {
      if(alfa[i] == bravo[i])
        *x = *y = alfa[i];
      else {
        *x = bravo[i];
        *y = alfa[i];
      }
    } else if(*x == '\0' || *y == '\0')
      bueno = false;
    else if(*x == bravo[i] && *y == alfa[i])
      continue;
    else
      bueno = false;
  }

  if(bueno) {
    map<char, char> cambios;
    map<char, char>::iterator busca;
    for (int i = 0; i < 26; i++)
      if(lista[i] != '\0' && lista[i] != 'a' + i)
        cambios[(char) 'a' + i] = lista[i];
    for (busca = cambios.begin(); busca != cambios.end(); busca++)
      cambios.erase(busca->second);
    cout << cambios.size() << endl;
    for (busca = cambios.begin(); busca != cambios.end(); busca++)
      cout << busca->first << ' ' <<  busca->second << endl;
  } else
    cout << "-1" << endl;
}
