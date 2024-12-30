// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LSRD_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LSRD_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LSRD_EXPORTS
#define LSRD_API __declspec(dllexport)
#else
#define LSRD_API __declspec(dllimport)
#endif

LSRD_API int MysteryFunc(void);
