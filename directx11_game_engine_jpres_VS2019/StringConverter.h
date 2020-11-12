#pragma once
#include <string>

// will act as singleton
class StringConverter
{
public:
	static std::wstring StringToWide(std::string str);
};
