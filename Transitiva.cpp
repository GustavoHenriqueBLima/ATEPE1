#include <iostream>
using namespace std;
int h;
// Crir um código que verifica se uma relação é Transitiva! Dados os pares
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

  int intransitividades = 0;
  // Agora, é necessário percorrer o conjunto R e verificar se ambos os pares
  // ordenados pertencem a A
  //Para ser transitiva, se (x,y) pertencem a A e (y,z) que também pertence a A, deve existir um par (x,z) em R.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (x[i] == A[j]) {
        for (int k = 0; k < m; k++) {
          if (y[i] == A[k]) {
            cout << endl
                 << "O par (" << x[i] << " , " << y[i] << ") pertence a A!" << endl;
            for (int l = 0; l < n; l++) {
              if (y[i]==x[l]) {
                cout << endl 
                     << "O y -> "<< y[i] << " do par (" << x[i] << " , " << y[i] << ") é igual ao x -> " << x[l] << " do par (" << x[l] << " , " << y[l] << ")" << endl;
                //Se existe um x[l] que é igual ao nosso y[i], implica que x[l] tem um y[l], e agt precisa verificar se esse tal y[l] pertence ao conjunto A.
                for(int g=0; g<m; g++){
                  if(y[l]==A[g]){
                    //se chegou até aqui, significa que nos encontramos um par x[i] y[i] q pertence a A, encontramos um par x[l] y[l] (com y[i] = x[l]) com ambos os valores pertencentes a A. Agora vamos percorrer todo o R para saber se tem algum par hipotético x[h] y[h] com os valores de x[i] y[l], e ai sim será transitivo.
                    for(h=0; h<n; h++){
                      if(x[i]==x[h] && y[l]==y[h]){
                        cout<< endl << "Como o par (" << x[i] << " , " << y[i] << ") e o par (" << x[l] << " , " << y[l] << ") existem, e o par (" << x[h] << " , " << y[h] << ") existe, EH TRANSITIVO NESSE PAR!" << endl << endl;  
                      }
                      else{
                        intransitividades++;
                      }
                    }
                  }              
                }
              }
            }
          }
        }
      }
    }
  }




 //verifica se é transitiva ou n
   if(h==intransitividades){
    cout<<"NÃO EH TRANSITIVA";
   }
   else{
     cout<<"EH TRANSITIVA!";
   }
}

