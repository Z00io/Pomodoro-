#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int sec = 0; /* segundos */
	int min = 0; /* minutos */
	int desc = 0;/* descanso*/
	
	int i = 0; /* loop */
	
	
	
	cout << "\nPomodoro\n";
	do{
				
		cout << "\r" << min << ":" << sec;
		
		if(desc==0 || desc==2 || desc==4 || desc==6 )		
			if(sec==59){
				sec=0;
				min++;
			}
			if(min==25){
				cout << "\nHora de descansar!\n";
				min=0;
				desc++;
			}	
		if(desc==1 || desc==3 || desc==5 || desc==7){
			if(sec==59){
				sec=0;
				min++;
			}
			if(min==5){
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
			if(min==25){
				cout << "\nVoltando ao Pomodoro! :)\n";
				desc++;
				min=0;
			}
		}
		if (desc==9){
			desc=0;
		}
		Sleep(10);
		sec++;
		
	}while(i==0);
		

	return 0;
	
	
}
