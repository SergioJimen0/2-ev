#include <iostream>
#include <string>

using namespace std;

int main() {
  string nombre1, nombre2, nombre3;
  int num_letras1, num_letras2, num_letras3;

  // Pedimos los tres nombres
  cout << "Ingresa el primer nombre: ";
  cin >> nombre1;
  cout << "Ingresa el segundo nombre: ";
  cin >> nombre2;
  cout << "Ingresa el tercer nombre: ";
  cin >> nombre3;

  // Mostramos las letras de cada nombre y su longitud
  cout << "Letras del primer nombre:" << endl;
  num_letras1 = nombre1.length();
  for (int i = 0; i < num_letras1; i++) {
    cout << nombre1[i] << " ";
  }
  cout << endl << "Número de letras: " << num_letras1 << endl;

  cout << "Letras del segundo nombre:" << endl;
  num_letras2 = nombre2.length();
  for (int i = 0; i < num_letras2; i++) {
    cout << nombre2[i] << " ";
  }
  cout << endl << "Número de letras: " << num_letras2 << endl;

  cout << "Letras del tercer nombre:" << endl;
  num_letras3 = nombre3.length();
  for (int i = 0; i < num_letras3; i++) {
    cout << nombre3[i] << " ";
  }
  cout << endl << "Número de letras: " << num_letras3 << endl;

  return 0;
}