#include <iostream>
#include <windows.h>
#include "buttons.h"


using namespace std;

void addFile(){
	cout<<"addFile()"<<endl;
	MessageBeep(MB_OK);
}

void addDirectory(){
	cout<<"addDirectory()"<<endl;
	MessageBeep(MB_OK);
}

void removeAll(){
	cout<<"removeAll()"<<endl;
	MessageBeep(MB_OK);
}

void btnPrev(){
	MessageBeep(MB_OK);
	cout<<"btn prev"<<endl;
}

void btnNext(){;
	MessageBeep(MB_OK);
	cout<<"btn next"<<endl;	
}

void btnPausePlay(){
	MessageBeep(MB_ICONERROR);
	cout<<"btn Pause/Play"<<endl;
}
