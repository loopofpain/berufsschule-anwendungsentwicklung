#include "konsolenfarben.h";
#include <windows.h>
#include <iostream>

void farbe(WORD color)
{
	SetConsoleTextAttribute(::GetStdHandle(STD_OUTPUT_HANDLE), color);
}