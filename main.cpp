
#include "exprtk_lib/exprtk_interface.h"

// if debug-modus: activate memory leak detection
#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
// Call _CrtDumpMemoryLeaks after main has returned and before program terminates.
struct AtExit
{
	~AtExit() { _CrtDumpMemoryLeaks(); }
};
AtExit doAtExit;
#endif

int main()
{
	exprtk_interface* pInterface = new exprtk_interface();
	delete pInterface;
}