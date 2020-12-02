#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int sec = 0; /* segundos */
	int min = 0; /* minutos */
	int desc = 0;/* descanso*/
	int escolha;
	int trab;
	int inter;
	int descanso;
	int ciclos = 0;
	
	int i = 0; /* loop */
	
	cout << "Digite 1 para o pomodoro tradicional(25,5,30), \ndigite 2 para o fastPomodoro(20,3,25), \ndigite 3 para personalizar:\n";
	cin >> escolha;
	
		switch(escolha){
		case 1: trab = 25, inter = 5, descanso = 30;
		break;
		case 2: trab = 20, inter = 3, descanso = 25;
		break;
		case 3: cout << "Insira os minutos de trabalho: ";
		cin >> trab;
		cout << "Insira os minutos de intervalo: ";
		cin >> inter;
		cout << "Insira os minutos de descanso: ";
		cin >> descanso;
		break;
		default: cout << "Verifique o que foi digitado";
}
	
	cout << "Escolha um numero de ciclos: ";
	cin >> ciclos;

	

	cout << "\nPomodoro\n";
	do{
				
		cout << "\r" << min << ":" << sec;
		
	if(desc==0 || desc==2 || desc==4 || desc==6 ){
			if(sec==59){
				sec=0;
				min++;
			}
			if(min==trab){
				cout << "\nHora de descansar!\n";
				min=0;
				desc++;
			}	
    }
	if(desc==1 || desc==3 || desc==5 || desc==7){
			if(sec==59){
				sec=0;
				min++;
			}
			if(min==inter){
				cout << "\nVolte ao trabalho!\n";
				min=0;
				desc++;
			}
			if(desc==8){
				cout << "\nFim do ciclo!\n";
				cout << "\nDescanse \n";
			}
		}
		
	if(desc==8){
			if(sec==59){
				sec=0;
				min++;
			}
			if(min==descanso){
				cout << "\nVoltando ao Pomodoro! :)\n";
				desc++;
				min=0;
			}
		}
	if (desc==9){
			desc=0;
		 	i++;
		}
		Sleep(1000);
		sec++;
		
	}while(i<ciclos);
		cout << "Fim do pomodoro!";

	return 0;
	
	
}
