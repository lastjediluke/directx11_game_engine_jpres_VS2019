#pragma once
#include "RenderWindow.h"


class WindowContainer
{
public:
	LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	/*Mouse
	Keyboard class: tutorial 5*/
protected:
	RenderWindow render_window;
};