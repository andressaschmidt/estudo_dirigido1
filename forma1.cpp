#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> variavel;
	variavel.clear();
	int n = 0, continua = 1, numero, soma = 0;

	while(continua != 0){
		cout << "insira o " << n+1 << "o numero:" << endl;
		cin >> numero;
		variavel.push_back(numero);
		n++;
		cout << "digite 1 para continuar inserindo e 0 para parar" << endl;
		cin >> continua;
	}

	numero = 1;

    while(numero != 0){
        cout << endl << "caso queira imprimir o somatorio dos seus elementos, digite 1" << endl;
        cout << "caso queira imprimir a media de seus elementos, digite 2" << endl;
        cout << "caso queira imprimir a media e o somatorio dos seus elemento, digite 3" << endl;
        cout << "caso queira substituir por zero todos os valores negativos e imprimir a media, digite 4" << endl;
        cout << "caso queira substituir por zero todos os valores repetidos e imprimir a media e o somatorio, digite 5" << endl;
        cout << "caso queira mostrar o vetor ordenado, digite 6" << endl;
        cout << "caso queira sair, digite 0" << endl << endl;

        cin >> numero;

        switch(numero){
            case 0:
                break;

            case 1:
                soma = 0;

                for(int i = 0; i < variavel.size(); i++){
                    soma += variavel[i];
                }
                cout << "Somatorio: " << soma << endl;

                break;

            case 2:
                soma = 0;

                for(int i = 0; i < variavel.size(); i++){
                    soma += variavel[i];
                }
                cout << "media: " << soma/variavel.size() << endl;

                break;

            case 3:
                soma = 0;

                for(int i = 0; i < variavel.size(); i++){
                    soma += variavel[i];
                }
                cout << "media: " << soma/variavel.size() << endl;
                cout << "somatorio: " << soma << endl;

                break;

            case 4:
                soma = 0;

                for(int i = 0; i < variavel.size(); i++){
                    if(variavel[i] < 0){
                        variavel[i] = 0;
                    }

                    soma += variavel[i];
                }
                cout << "media substituindo por 0 todos os valores negativos: " <<soma/variavel.size() << endl;

                break;

            case 5:
                soma = 0;

                for(int i = 0; i < variavel.size(); i++){
                    for(int j = 0; j < variavel.size(); j++){
                        if(variavel[i] == variavel[j]){
                            variavel[j] == 0;
                        }
                    }

                    soma += variavel[i];
                }

                cout << "media substituindo por 0 todos os valores repetidos: " << soma/variavel.size() << endl;

                break;

            case 6:
                sort(variavel.begin(), variavel.end());
                for(int i = 0; i < variavel.size(); i++){
                    cout << variavel[i] << endl;
                }

                break;

            default:
                cout << "opçao invalida";
                break;
        }
    }

	return 0;

}
