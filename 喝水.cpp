#include<windows.h>
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )  

int main()
{
	ShowWindow(GetForegroundWindow(),0);
	system("pythonw .\\�ܤ�.pyw");	
    return 0;
}

