/*Leia uma matriz 5 x 5. Leia tamb�m um valor X.
O programa dever� fazer uma busca desse valor na matriz e,
ao final, escrever a localiza��o (linha e coluna) ou uma mensagem de �n�o encontrado�. 
*/

#include <iostream>

using namespace std;


void ler_matriz(int m[5][5], int l, int c) {
	cout << "Digite os valores da matriz:" << endl;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> m[i][j];
		}
	}
}



void ler_valorx(int m[5][5], int v, int l, int c) {
	bool encontrado = false;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (m[i][j] == v)
			{
				encontrado = true;
				cout << "O valor " << v << " est� localizado na posi��o [" << i << "][" << j << "]" << endl;
			}
		}
	}
	if (!encontrado)
		cout << "Valor n�o encontrado." << endl;
}








	int main() {
		int matriz[5][5];
		int valorx;
		int linha;
		int coluna;
		cout << "Digite a quantidade de linhas: ";
		cin >> linha;
		cout << "Digite a quantidade de colunas: ";
		cin >> coluna;

		if (linha <= 0 || linha > 5 || coluna <= 0 || coluna > 5)
		{
			cout << "N�mero de linhas ou colunas inv�lido!" << endl;
			return 1; // Retornando 1 indica que ocorreu um erro
		}

		ler_matriz(matriz, linha, coluna);

		cout << "Digite o valor que deseja encontrar: ";
		cin >> valorx;

		ler_valorx(matriz, valorx, linha, coluna);

		return 0;
	}
