
#include "exprtk_interface.h"
#include "exprtk_object.h"

exprtk_interface::exprtk_interface()
{
	m_pExprObj = new exprtk_object();
}

exprtk_interface::~exprtk_interface()
{
	delete m_pExprObj;
}