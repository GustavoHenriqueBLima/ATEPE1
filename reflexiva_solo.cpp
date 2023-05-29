#include <iostream>
using namespace std;

//Crir um código que verifica se uma relação é REFLEXIVA! Dados os pares ordenados (x,y) e o conjunto A.

int main(){
	int n, m;	

	cout << "Digite o numero de pares ordenados\n";
	cin >> n;
  int x[n], y[n];
	
//Definir os pares ordenados	
	for (int i=0; i<n; i++){
		cout << "Digite a abcissa de numero "<< i+1 << endl;
		cin >> x[i];
		cout << "Digite a ordenada de numero "<< i+1 << endl;
		cin >> y[i];
	}
	
//Verificar os pares ordenados
	for (int i=0; i<n; i++){
		cout << i+1 << "- (" << x[i] << "," << y[i] <<")\n";
	}

//Definir o conjunto A de onde os pares ordenados devem fazer parte, com m elementos.
	cout << "Digite o numero de elementos do conjunto original" << endl;
	cin >> m;
  int A[m];
	for (int i=0; i<m; i++){
		cout << "Digite o elemento de numero " << i+1 << endl;
		cin >> A[i];
	}

//Verificar o conjunto de origem
	for (int i=0; i<m; i++){
		cout << "Elemento " << i+1 << ":" << A[i] << endl;
	}
	
	bool flag_ref = true;
//Percorrer, para todo A[j], todas as coordenadas x[i] e y[i] (sobre o mesmo índice) até encontrar uma que tenha o mesmo valor de A[j] em X e Y (par)
	for (int j=0; j<m; j++){
		bool flag_par;
		for (int i=0; i<n; i++){
			if (A[j] == x[i] && A[j] == y[i]){
				cout << "\nPara A[j]= "<< A[j]<< ", o par (" << x[i] << "," << y[i] << ") eh reflexivo com o conjunto original\n";
				flag_par=true;
				break;
			}
			else{
				cout << "\nPara A[j]= "<< A[j]<< ", o par (" << x[i] << "," << y[i] << ") NAO EH REFLEXIVO COM O CONJUNTO ORIGINAL!\n";
				flag_par=false;
			}
		}
//Até aqui o programa sabe encontrar os pares, agora falta saber se isso vale para todos os A[j], sem que ele esqueça
//Se para todos os x[i] e y[i] ele apontou que não é reflexivo, quer dizer que para aquele A[j] não tem par que seja reflexivo, logo, a relação não seria reflexiva 		
		if (!flag_par){
			flag_ref = false;
			break;
		}
	}
	
//Printa se é reflexivo ou não
	if (flag_ref)
		cout << "\n\nA relacao eh reflexiva";
	else 
		cout << "\n\nA relacao NAO EH REFLEXIVA";
}
