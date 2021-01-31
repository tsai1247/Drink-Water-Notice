#include<windows.h>
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )  

int main()
{
	ShowWindow(GetForegroundWindow(),0);
	system("taskkill /F /IM pythonw.exe");
    return 0;
}

