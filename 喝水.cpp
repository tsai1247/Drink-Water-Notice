#include<windows.h>
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )  

int main()
{
	ShowWindow(GetForegroundWindow(),0);
	system("pythonw .\\³Ü¤ô.pyw");	
    return 0;
}

