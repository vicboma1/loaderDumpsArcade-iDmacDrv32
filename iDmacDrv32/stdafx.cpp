#include "stdafx.h"

DWORD __stdcall iDmacDrvOpen(int a1, LPVOID lp, LPVOID a3)
{
	return 0;
}

DWORD __stdcall  iDmacDrvClose(int a1, LPVOID lp)
{
	return 0;
}

int __stdcall iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4)
{
	return 0;
}

int __stdcall iDmacDrvDmaWrite(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4)
{
	return 0;
}

int __stdcall iDmacDrvRegisterWrite(int a1, DWORD command, int data, LPVOID lp)
{
	return 0;
}

int __stdcall iDmacDrvRegisterRead(int a1, DWORD command, LPVOID ret_pointer, LPVOID a4)
{
	return 0;
}

int __stdcall iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
	return 0;
}

 int __stdcall iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
	return 0;
}

int   __stdcall iDmacDrvProgramDownload(int deviceId, void* lp, LPVOID res)
{
	return 0;
}
