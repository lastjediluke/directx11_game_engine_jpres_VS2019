#pragma once
#include "RenderWindow.h"
#include "Keyboard/KeyboardClass.h"
#include "Mouse/MouseClass.h"

class WindowContainer
{
public:
	LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	/*Mouse
	Keyboard class: tutorial 5*/
protected:
	RenderWindow render_window;
	KeyboardClass keyboard;

	// tut 6
	MouseClass mouse;
};