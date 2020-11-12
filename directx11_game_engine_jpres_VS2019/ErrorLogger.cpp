#include "ErrorLogger.h"
#include <comdef.h>
void ErrorLogger::Log(std::string message)
{
	std::string error_message = "Error: " + message;

	// A for ascii
	MessageBoxA(NULL, error_message.c_str(), "Error", MB_ICONERROR);
}

void ErrorLogger::Log(HRESULT hr, std::string message)
{
	_com_error error(hr);
	std::wstring error_message = L"Error: " + StringConverter::StringToWide(message) + L"\n" + error.ErrorMessage();
	// w for wide
	MessageBoxW(NULL, error_message.c_str(), L"Error", MB_ICONERROR);
}
