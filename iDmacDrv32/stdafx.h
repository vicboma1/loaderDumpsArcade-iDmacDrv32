#include <Windows.h>

DWORD __stdcall iDmacDrvOpen(int a1, LPVOID lp, LPVOID a3);
DWORD __stdcall iDmacDrvClose(int a1, LPVOID lp);
int   __stdcall iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);
int   __stdcall iDmacDrvDmaWrite(int a1, void *lp, UINT_PTR ucb, LPVOID a4);
int   __stdcall iDmacDrvRegisterWrite(int a1, DWORD command, int data, LPVOID lp);
int   __stdcall iDmacDrvRegisterRead(int a1, DWORD command, LPVOID ret_pointer, LPVOID a4);
	  