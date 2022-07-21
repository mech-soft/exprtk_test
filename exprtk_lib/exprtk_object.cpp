
#include <iostream>
#include "exprtk_object.h"

exprtk_object::exprtk_object()
{
	m_exprtk_symbolTable.add_constant("a", 2.0);
	m_exprtk_expression.register_symbol_table(m_exprtk_symbolTable);	
	m_exprtk_parser.compile("sin(2.3*a)", m_exprtk_expression);

	std::cout << "sin(2.3*a) with a=2.0 equals: " << m_exprtk_expression.value() << std::endl;
}