#pragma once

class exprtk_object;

#if EXPRTKDLLBUILD
#define EXPRTKDllMode class __declspec(dllexport) 
#else
#define EXPRTKDllMode class 
#endif

EXPRTKDllMode exprtk_interface
{
public:
	exprtk_interface();
	virtual ~exprtk_interface();

private:
	exprtk_object *m_pExprObj;
};
