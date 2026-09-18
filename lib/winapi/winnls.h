// SPDX-License-Identifier: MIT
// Experimental UTF-8 WideChar API (local homelab test; not upstream yet).

#ifndef __WINNLS_H__
#define __WINNLS_H__

#include <windef.h>
#include <winnt.h>

#ifndef CP_UTF8
#define CP_UTF8 65001
#endif

/* kodi4xbox unimplemented.h uses 1 for UTF-8 */
#ifndef CP_UTF8_NXDK_KODI
#define CP_UTF8_NXDK_KODI 1
#endif

#ifdef __cplusplus
extern "C" {
#endif

int WideCharToMultiByte (UINT CodePage, DWORD dwFlags, const WCHAR *lpWideCharStr, int cchWideChar,
                         char *lpMultiByteStr, int cbMultiByte, const char *lpDefaultChar, PBOOL lpUsedDefaultChar);

int MultiByteToWideChar (UINT CodePage, DWORD dwFlags, const char *lpMultiByteStr, int cbMultiByte,
                         WCHAR *lpWideCharStr, int cchWideChar);

#ifdef __cplusplus
}
#endif

#endif
