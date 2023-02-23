#include <iostream>
#include <string>
#include <algorithm> // Librería para ordenar

using namespace std;

int main() {
  string nombres[3];
  int num_letras[3];

  // Pedimos los tres nombres
  for (int i = 0; i < 3; i++) {
    cout << "Ingresa el nombre " << i+1 << ": ";
    cin >> nombres[i];
  }

  // Ordenamos los nombres alfabéticamente
  sort(nombres, nombres+3);

  // Mostramos las letras de cada nombre y su longitud
  for (int i = 0; i < 3; i++) {
    cout << "Letras del nombre " << i+1 << ": " << nombres[i] << endl;
    num_letras[i] = nombres[i].length();
    cout << "Número de letras: " << num_letras[i] << endl << endl;
  }

  return 0;
}
