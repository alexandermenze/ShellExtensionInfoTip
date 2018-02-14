#ifndef _TOOLTIP_HANDLER_H

#define _TOOLTIP_HANDLER_H

#include <Windows.h>
#include <ShlObj.h>

class TooltipHandler : IQueryInfo {
	COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetInfoFlags(DWORD *pdwFlags) override;
	COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetInfoTip(THIS_ DWORD dwFlags, _Outptr_ PWSTR *ppwszTip) override;
};

#endif // !_TOOLTIP_HANDLER_H
