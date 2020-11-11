#include <iostream>
#include <windows.h>
#include "buttons.h"
#include "file.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

void AddMenu(HWND hWnd);

HMENU hMenu;
HWND button;


int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) 
{
	
	File file("a","b");
	
	WNDCLASSW wc = {0};
	
	wc.hbrBackground = (HBRUSH) COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hInstance = hInst;
	wc.lpszClassName = L"myWindowClass";
	wc.lpfnWndProc = WindowProcedure;
	
	
	if(!RegisterClassW(&wc)){
		return -1;
	}	
	
	CreateWindowW(L"myWindowClass", L"My Window", WS_OVERLAPPEDWINDOW| WS_VISIBLE,100,100, 500,500, NULL, NULL, hInst, NULL);
	
	MSG msg = {0};
	
	while(GetMessage(&msg,NULL,NULL,NULL)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

//	MessageBox(NULL,"Hello", "My firstu GUI",MB_OK);
	return 0;
}

LRESULT CALLBACK WindowProcedure (HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
	switch(msg){
		case WM_CREATE:
			AddMenu(hWnd);
			
			CreateWindowW(L"button",L"Prev", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,10,10, 50, 30, hWnd, (HMENU) 4, GetModuleHandle(NULL), NULL);
			CreateWindowW(L"button", L"Next", WS_CHILD | WS_VISIBLE, 180,10, 50, 30, hWnd, (HMENU) 5,NULL, NULL);
			CreateWindowW(L"button", L"Pause/Play", WS_CHILD | WS_VISIBLE,70,10, 100, 30, hWnd, (HMENU) 6,NULL, NULL);
			
			break;
		case WM_COMMAND:
			//obsluga zdarzen
			switch(wp){
				case 1:
					addFile();
					break;
				case 2:
					addDirectory();
					break;
				case 3:
					removeAll();
					break;
					
				case 4:
					btnPrev();
					break;
				case 5:
					btnNext();
					break;
				case 6:
					btnPausePlay();
					break;
				default:
					printf("zly wybor");		
			}
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProcW(hWnd,msg,wp,lp);
	}
}



void AddMenu(HWND hWnd){
	//lista menu
	
	hMenu = CreateMenu();
	
	AppendMenu(hMenu,MF_STRING, 1, "Add File");
	AppendMenu(hMenu,MF_STRING, 2, "Add Directory");
	AppendMenu(hMenu,MF_STRING, 3, "Remove All");
	
	SetMenu(hWnd,hMenu);
}

