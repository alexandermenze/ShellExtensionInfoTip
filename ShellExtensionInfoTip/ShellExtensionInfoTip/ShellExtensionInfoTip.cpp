// ShellExtensionInfoTip.cpp: Definiert die exportierten Funktionen für die DLL-Anwendung.
//

#include <Windows.h>
#include "TooltipHandler.h"

extern "C" HRESULT __stdcall DllGetClassObject(_In_ REFCLSID rclsid, _In_ REFIID riid, _Out_ LPVOID *ppv) {
	MessageBox(NULL, L"Working!", L"Yep!", MB_OK);
	return S_OK;
}

extern "C" HRESULT __stdcall DllCanUnloadNow(void) {
	return S_OK;
}

