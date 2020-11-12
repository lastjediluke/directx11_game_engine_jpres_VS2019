#include "../Header Files/Engine.h"
#include <windows.h>
#include <tchar.h>

#pragma comment(lib,"d3d11.lib")
#pragma comment(lib, "DirectXTK.lib")

// CALLBACK WinMain
int CALLBACK WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR     lpCmdLine,
	_In_ int       nCmdShow
)
{
	HRESULT hr = S_OK;
	if (SUCCEEDED(hr))
	{
		// 
		//MessageBoxA()
	}
	if (FAILED(hr))
	{
		ErrorLogger::Log(hr, "Failure");
	}

	Engine engine;
	engine.Initialize(hInstance, "Title", "MyWindowClass", 800, 600);
	while (engine.ProcessMessages() == true)
	{
		// Sleep(50);
	}
	
	return 0;
}