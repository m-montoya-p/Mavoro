#define NDEBUG
#define _UNICODE
#define UNICODE
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

void Mavoro(void)
{
	OutputDebugStringW(L"Hello World!\n");
}