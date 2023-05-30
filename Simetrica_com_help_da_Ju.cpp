#include <iostream>
using namespace std;

// Crir um código que verifica se uma relação é SIMETRICA! Dados os pares
// ordenados (x,y) e o conjunto A.

int main() {
  int n, m;
  bool simetrica = true;

  cout << "Digite o numero de pares ordenados\n";
  cin >> n;
  int x[n], y[n];

  // Definir os pares ordenados
  for (int i = 0; i < n; i++) {
    cout << "Digite a abcissa de numero " << i + 1 << endl;
    cin >> x[i];
    cout << "Digite a ordenada de numero " << i + 1 << endl;
    cin >> y[i];
  }

  // Verificar os pares ordenados
  for (int i = 0; i < n; i++) {
    cout << i + 1 << "- (" << x[i] << "," << y[i] << ")\n";
  }

  // Definir o conjunto A de onde os pares ordenados devem fazer parte, com m
  // elementos.
  cout << "Digite o numero de elementos do conjunto original" << endl;
  cin >> m;
  int A[m];
  for (int i = 0; i < m; i++) {
    cout << "Digite o elemento de numero " << i + 1 << endl;
    cin >> A[i];
  }

  // Verificar o conjunto de origem
  for (int i = 0; i < m; i++) {
    cout << "Elemento " << i + 1 << ":" << A[i] << endl;
  }

  int contador = 0, pertence = 0;
  // Agora, é necessário percorrer o conjunto R e verificar se ambos os pares
  // ordenados pertencem a A
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (x[i] == A[j]) {
        for (int k = 0; k < m; k++) {
          if (y[i] == A[k]) {
            cout << endl
                 << "O par (" << x[i] << " , " << y[i] << ") pertence a A!"
                 << endl;
            pertence++;
            for (int l = 0; l < n; l++) {
              if (x[i] == y[l] && y[i] == x[l]) {
                cout << endl 
                     << "O par (" << x[i] << " , " << y[i]
                     << ") eh simetrico ao par (" << x[l] << " , " << y[l]
                     << ")" << endl;
                contador++;
              }
            }
            //pertence++;
          }
        }
      }
    }
  }

  if (contador == pertence) {
    cout << endl << "S - A RELACAO EH SIMETRICA SIM";
  } else {
    cout << endl << "N - A RELACAO NAO EH SIMETRICA NAO";
  }
}
