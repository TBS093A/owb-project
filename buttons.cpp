#include <iostream>
#include <windows.h>
#include "buttons.h"

using namespace std;

bool play = false;

void addFile(){
	cout<<"addFile()"<<endl;

	mciSendString("open \"C:\Users\Lenovo Y700\Desktop\08_DRAGON_AGE.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	
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
	
	if (!play) {
		cout << "file playing...." << endl;
		time_t t1 = time(0);
		mciSendString("play mp3 from 10000 to 30000 wait", NULL, 0, NULL);
		time_t t2 = time(0);
		cout << "Duration of the play :" << t2-t1 << " seconds." << endl;
	} else {
		mciSendString("close mp3", NULL, 0, NULL);
	}
	
	cout << "btn Pause/Play" << endl;
}
