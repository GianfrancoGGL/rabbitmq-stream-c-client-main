//---------------------------------------------------------------------------
#ifndef rmqsGlobalH
#define rmqsGlobalH
//---------------------------------------------------------------------------
typedef char char_t;
typedef unsigned char uchar_t;
typedef unsigned char bool_t;
typedef double double_t;
//---------------------------------------------------------------------------
#ifndef __cplusplus
#ifndef true
#define true   1
#endif
#ifndef false
#define false  0
#endif
#endif
#define getmin(x, y) (x < y ? x : y)
#ifdef _MSC_VER 
#pragma warning(disable:4996)
#endif
//---------------------------------------------------------------------------
#define RQMS_MAX_HOSTNAME_LENGTH      256
//---------------------------------------------------------------------------
#endif
