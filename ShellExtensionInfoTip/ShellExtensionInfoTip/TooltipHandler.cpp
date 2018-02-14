#include "TooltipHandler.h"
#include "Shlobj.h"
#include <string>

HRESULT TooltipHandler::GetInfoFlags(DWORD* pdwFlags)
{
	return E_NOTIMPL;
}

HRESULT TooltipHandler::GetInfoTip(DWORD dwFlags, PWSTR* ppwszTip)
{
	std::wstring tooltipText(L"This is my custom addon!");
	PWSTR* stringPointer = (PWSTR*)CoTaskMemAlloc(tooltipText.length() + 1);
	wcscpy((WCHAR*)stringPointer, tooltipText.c_str());
	ppwszTip = stringPointer;
	return S_OK;
}
