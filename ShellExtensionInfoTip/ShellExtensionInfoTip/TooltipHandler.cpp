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
	std::size_t length = tooltipText.length() + 1;
	PWSTR* stringPointer = (PWSTR*)CoTaskMemAlloc(length);
	wcscpy_s((WCHAR*)stringPointer, length, tooltipText.c_str());
	ppwszTip = stringPointer;
	return S_OK;
}
