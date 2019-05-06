#ifndef __CHANLUNZB_H__
#define __CHANLUNZB_H__

#include <windows.h>

#pragma pack(push,1)

// 函数(数据个数,输出,输入a,输入b,输入c)
typedef void(*pPluginFUNC)(int nCount, float *pOut, float *a, float *b, float *c);

typedef struct tagPluginTCalcFuncInfo
{
    unsigned short nFuncMark; // 函数编号
    pPluginFUNC    pCallFunc; // 函数地址
} PluginTCalcFuncInfo;

#ifdef __cplusplus
extern "C" {
#endif

/********************************************************************/
//******************************通达信******************************//
/********************************************************************/
__declspec(dllexport) BOOL RegisterTdxFunc(PluginTCalcFuncInfo **pInfo);
#ifdef __cplusplus
};
#endif

#pragma pack(pop)
#endif
