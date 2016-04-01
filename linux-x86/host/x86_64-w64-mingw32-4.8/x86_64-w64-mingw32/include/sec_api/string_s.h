/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STRING_S
#define _INC_STRING_S

#include <string.h>

#if defined(MINGW_HAS_SECURE_API)

#ifdef __cplusplus
extern "C" {
#endif

  _CRTIMP errno_t __cdecl _strset_s(char *_Dst,size_t _DstSize,int _Value);
  _CRTIMP errno_t __cdecl _strerror_s(char *_Buf,size_t _SizeInBytes,const char *_ErrMsg);
  _CRTIMP errno_t __cdecl strerror_s(char *_Buf,size_t _SizeInBytes,int _ErrNum);
  _CRTIMP errno_t __cdecl _strlwr_s(char *_Str,size_t _Size);
  _CRTIMP errno_t __cdecl _strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale);
  _CRTIMP errno_t __cdecl _strnset_s(char *_Str,size_t _Size,int _Val,size_t _MaxCount);
  _CRTIMP errno_t __cdecl _strupr_s(char *_Str,size_t _Size);
  _CRTIMP errno_t __cdecl _strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale);

  _CRTIMP errno_t __cdecl strncat_s(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount);
  _CRTIMP errno_t __cdecl _strncat_s_l(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount,_locale_t _Locale);
  __CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_0_2_(errno_t,strcpy_s,char,,_Dst,size_t,,_SizeInBytes,const char *,,_Src)
  _CRTIMP errno_t __cdecl strncpy_s(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount);
  _CRTIMP errno_t __cdecl _strncpy_s_l(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP char *__cdecl strtok_s(char *_Str,const char *_Delim,char **_Context);
  _CRTIMP char *__cdecl _strtok_s_l(char *_Str,const char *_Delim,char **_Context,_locale_t _Locale);
  __CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_0_2_(errno_t,strcat_s,char,,strDestination,size_t,,numberOfElements,const char *,,strSource)

  _CRTIMP errno_t __cdecl memmove_s(void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
#ifndef _WSTRING_S_DEFINED
#define _WSTRING_S_DEFINED
  _CRTIMP wchar_t *__cdecl wcstok_s(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context);
  _CRTIMP errno_t __cdecl _wcserror_s(wchar_t *_Buf,size_t _SizeInWords,int _ErrNum);
  _CRTIMP errno_t __cdecl __wcserror_s(wchar_t *_Buffer,size_t _SizeInWords,const wchar_t *_ErrMsg);
  _CRTIMP errno_t __cdecl _wcsnset_s(wchar_t *_Dst,size_t _DstSizeInWords,wchar_t _Val,size_t _MaxCount);
  _CRTIMP errno_t __cdecl _wcsset_s(wchar_t *_Str,size_t _SizeInWords,wchar_t _Val);
  _CRTIMP errno_t __cdecl _wcslwr_s(wchar_t *_Str,size_t _SizeInWords);
  _CRTIMP errno_t __cdecl _wcslwr_s_l(wchar_t *_Str,size_t _SizeInWords,_locale_t _Locale);
  _CRTIMP errno_t __cdecl _wcsupr_s(wchar_t *_Str,size_t _Size);
  _CRTIMP errno_t __cdecl _wcsupr_s_l(wchar_t *_Str,size_t _Size,_locale_t _Locale);

  __CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_0_2_(errno_t,wcscpy_s,wchar_t,,_Dst,size_t,,_nElem,const wchar_t *,,_Src)
  __CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_0_2_(errno_t,wcscat_s,wchar_t,,_Dst,size_t,,_nElem,const wchar_t *,,_Src)

  _CRTIMP errno_t __cdecl wcsncat_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  _CRTIMP errno_t __cdecl _wcsncat_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP errno_t __cdecl wcsncpy_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  _CRTIMP errno_t __cdecl _wcsncpy_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP wchar_t *__cdecl _wcstok_s_l(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context,_locale_t _Locale);
  _CRTIMP errno_t __cdecl _wcsset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val,_locale_t _Locale);
  _CRTIMP errno_t __cdecl _wcsnset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val, size_t _Count,_locale_t _Locale);

#endif

#ifndef _MEMORY_S_DEFINED
#define _MEMORY_S_DEFINED
  errno_t __cdecl memcpy_s (void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
#endif /*_MEMORY_S_DEFINED*/

#ifdef __cplusplus
}
#endif
#endif
#endif
