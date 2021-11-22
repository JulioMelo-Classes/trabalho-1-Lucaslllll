#include "../include/forca.hpp";
#include <iostream>
using namespace std;



void comecar(){
	bool terminou = false;
	// string cab = "O", armr = "/", corp = "|", arml = "\";

	while(terminou == false){
	cout << "Iniciando o Jogo no nível Médio, será que você conhece essa palavra?"<< endl;
	cout << "  O " << endl;
	cout << '/';
	cout << " | ";
	cout << "\\";
	_ _ _ _ I _
	Pontos: 0
	Palpite: A
	}
}

int main(int argc, char *palavras[], char *score[]){
	Forca game(*palavras, *score);
	int escolha;
	int dificuldade;

	cout << "Bem vindo ao Jogo Forca! escolha uma das opções" << endl;
	cout << "1 - Iniciar Jogo" << endl;
	cout << "2 - Ver scores anteriores" << endl;

	cin >> escolha;

	if(escolha == 1){
		bool passe = true;
		do{
			
			dificuldade = 0;
			cout << "Vamos iniciar o jogo! Por favor escolha o nível de dificuldade, escolha certo ou ficará em loop" << endl;
			cout << "1 - Fácil" << endl;
			cout << "2 - Médio" << endl;
			cout << "3 - Difícil" << endl;

			cin >> dificuldade;

			if(dificuldade == 1){
				game.set_dificuldade(game.FACIL);
			}else if(dificuldade == 2){
				game.set_dificuldade(game.MEDIO);
			}else if(dificuldade == 3){
				game.set_dificuldade(game.DIFICIL);
			}else{
				passe = false;
			}
			
			
		}while(passe == false);
		
	}else if(escolha == 2){

	}

	// for(int i=0; i<argc; i++)
	// 	cout<<"Argumento["<<i<<"]: "<<argv[i]<<endl;
	return 0;
}