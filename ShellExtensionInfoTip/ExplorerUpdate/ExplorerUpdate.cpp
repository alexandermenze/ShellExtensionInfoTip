// ExplorerUpdate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <ShlObj.h>

int main()
{
	SHChangeNotify(SHCNE_ASSOCCHANGED, SHCNF_NOTIFYRECURSIVE, NULL, NULL);

    return 0;
}

